/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:33:16 by budemir           #+#    #+#             */
/*   Updated: 2023/02/23 12:33:22 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upper(unsigned int n, int *len)
{
	if (n < 16)
	{
		if (n < 10)
			*len += ft_putchar(n + 48);
		else
			*len += ft_putchar(n + 55);
	}
	else
	{
		ft_upper(n / 16, len);
		ft_upper(n % 16, len);
	}
	return (*len);
}
