/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:45:09 by budemir           #+#    #+#             */
/*   Updated: 2022/12/16 14:47:41 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n2;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n2 = (unsigned int)n * -1;
	}
	else
		n2 = (unsigned int)n;
	if (n2 >= 10)
		ft_putnbr_fd(n2 / 10, fd);
	ft_putchar_fd((n2 % 10) + 48, fd);
}
