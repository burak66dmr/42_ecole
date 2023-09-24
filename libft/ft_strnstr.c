/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:01:24 by budemir           #+#    #+#             */
/*   Updated: 2022/12/16 15:50:25 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	m;
	char	*result;

	i = 0;
	result = (char *)haystack;
	if (!needle[i])
		return (result);
	else if (len == 0)
		return (0);
	while (result[i] != '\0' && i < len)
	{
		m = 0;
		while ((needle[m] && result[i + m] == needle[m] && (i + m < len)))
			m++;
		if (needle[m] == '\0')
			return (&result[i]);
		i++;
	}
	return (0);
}
