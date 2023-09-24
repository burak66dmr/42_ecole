/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:21:06 by budemir           #+#    #+#             */
/*   Updated: 2022/12/17 13:36:25 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;
	char	*dest;

	dest = b;
	a = 0;
	while (a < len)
	{
		dest[a] = c;
		a++;
	}
	return (dest);
}
