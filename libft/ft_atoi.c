/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:03:23 by budemir           #+#    #+#             */
/*   Updated: 2022/12/16 14:46:21 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		c;
	long	num;

	c = 1;
	num = 0;
	while (((*str >= 9 && *str <= 13) || *str == 32) && *str)
		str++;
	if (*str == 45)
	{
		c *= -1;
		str++;
	}
	else if (*str == 43)
		str++;
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += (*str - 48);
		str++;
	}
	return (num * c);
}
