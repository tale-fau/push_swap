/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:22 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/29 18:51:47 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_astack	a;
	t_bstack	b;

	if (ac > 2)
	{
		printf("test");
		if (no_quotes(&a, &b, ac, av) == 1)
			return (1);
	}
	else
	{
		if (w_quotes(&a, &b, av[1]) == 1)
			return (1);
	}
	int		i;
	i = 0;
	while (i < 5)
	{
		printf(">> %i\n", a.stack[i]);
		i++;
	}
	rra(&a);
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf(">> %i\n", a.stack[i]);
		i++;
	}
	//printf(">> %s\n", b);
/* 	pa(a, b);
	printf(">> %s\n", a);
	printf(">> %s\n", b); */
	return (0);
}
