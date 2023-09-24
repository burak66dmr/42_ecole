/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:26:07 by budemir           #+#    #+#             */
/*   Updated: 2023/02/23 12:26:36 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower(unsigned int n, int *len)
{
	if (n < 16)
	{
		if (n < 10)
			*len += ft_putchar(n + 48);
		else
			*len += ft_putchar(n + 87);
	}
	else
	{
		ft_lower(n / 16, len);
		ft_lower(n % 16, len);
	}
	return (*len);
}
