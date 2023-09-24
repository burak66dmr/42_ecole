/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:03:53 by budemir           #+#    #+#             */
/*   Updated: 2022/12/24 12:23:47 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (0);
	while (*s1)
		newstr[i++] = *(s1++);
	while (*s2)
		newstr[i++] = *(s2++);
	newstr[i] = '\0';
	return (newstr);
}
