/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:37:59 by budemir           #+#    #+#             */
/*   Updated: 2023/03/14 18:05:01 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_new_left_str(char *flg)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (flg[i] && flg[i] != '\n')
		i++;
	if (!flg[i])
	{
		free(flg);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(flg) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (flg[i])
		str[j++] = flg[i++];
	str[j] = '\0';
	free(flg);
	return (str);
}

char	*ft_get_line(char *flg)
{
	int		i;
	char	*str;

	i = 0;
	if (!flg[i])
		return (NULL);
	while (flg[i] && flg[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (flg[i] && flg[i] != '\n')
	{
		str[i] = flg[i];
		i++;
	}
	if (flg[i] == '\n')
	{
		str[i] = flg[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_read_to_left_str(int fd, char *flg)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(flg, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		flg = ft_strjoin(flg, buff);
	}
	free(buff);
	return (flg);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*flg[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	flg[fd] = ft_read_to_left_str(fd, flg[fd]);
	if (!flg[fd])
		return (NULL);
	str = ft_get_line(flg[fd]);
	flg[fd] = ft_new_left_str(flg[fd]);
	return (str);
}
