/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:34:55 by budemir           #+#    #+#             */
/*   Updated: 2022/12/19 15:03:59 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (0);
	result[len] = 0;
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
