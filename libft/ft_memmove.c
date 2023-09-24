/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:29:42 by budemir           #+#    #+#             */
/*   Updated: 2022/12/16 15:48:40 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (len > i)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len--)
			dest[len] = source[len];
	}
	return (dst);
}
