/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:33:11 by budemir           #+#    #+#             */
/*   Updated: 2023/02/23 12:38:16 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n, int *len)
{
	if (n >= 0 && n <= 9)
		*len += ft_putchar(n + 48);
	if (n > 9)
	{
		ft_unsigned(n / 10, len);
		ft_unsigned(n % 10, len);
	}
	return (*len);
}
