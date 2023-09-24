/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:26:59 by budemir           #+#    #+#             */
/*   Updated: 2023/02/23 12:27:17 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long i, int *len)
{
	if (i < 16)
	{
		if (i < 10)
		{
			*len += ft_putchar(i + 48);
		}
		else
			*len += ft_putchar(i + 87);
	}
	else
	{
		ft_pointer(i / 16, len);
		ft_pointer(i % 16, len);
	}
	return (*len);
}
