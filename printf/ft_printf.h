/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:31:49 by budemir           #+#    #+#             */
/*   Updated: 2023/02/23 12:31:55 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_unsigned(unsigned int n, int *len);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_upper(unsigned int n, int *len);
int	ft_lower(unsigned int n, int *len);
int	ft_putnbr(int n, int *len);
int	ft_func(char s, va_list *args);
int	ft_printf(const char *s, ...);
int	ft_pointer(unsigned long long i, int *len);
#endif