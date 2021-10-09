/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:22 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 15:28:39 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		size;

	if (ac < 2)
		return (1);
	if (ac > 2)
	{
		if (no_quotes(&a, &b, ac, av) == 1)
			return (1);
	}
	else
	{
		if (w_quotes(&a, &b, av[1]) == 1)
			return (1);
	}
	if (sorted_stack(&a) == 1)
	{
		free_stack(&a, &b);
		return (0);
	}
	size = a.size;
	sc_quicksort(&a, &b, size, 'a');
//	printf("STACK FINAL :::\n");
/* 	for (int i = 0; i < a.size; i++)
		printf("%d\n", a.stack[i]); */
	free_stack(&a, &b);
	return (0);
}
