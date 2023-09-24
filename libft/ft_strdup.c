/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:07:15 by budemir           #+#    #+#             */
/*   Updated: 2022/12/16 15:51:49 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s1);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	ft_strlcpy (str, s1, i + 1);
	return (str);
}
