/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 08:53:48 by budemir           #+#    #+#             */
/*   Updated: 2023/06/23 08:58:46 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	ft_push_swap(char *av[])
{
	t_stacks		stack;
	register int	size;
	register int	index;

	index = -1;
	size = ft_ps_strlen(av);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
	while (++index < size)
		stack.a[index] = ft_ps_atoi(av[index], stack.a);
	ft_check_repeat(stack.a, size);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

int
	main(int ac, char *av[])
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		ft_push_swap(av);
		return (0);
	}
	return (0);
}
