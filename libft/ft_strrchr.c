/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:15:12 by budemir           #+#    #+#             */
/*   Updated: 2022/12/16 14:49:23 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (!ft_strchr(s, c))
		return (0);
	while (*s)
		s++;
	while (*s != ((char)c))
		s--;
	return ((char *)s);
}
