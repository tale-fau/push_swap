/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:22 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/01 18:34:35 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

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
	int		i;
	i = 0;
	while (i < 5)
		b.stack[i++] = 0;
	i = 0;
	while (i < 5)
	{
		printf(">> %i || >> %i\n", a.stack[i], b.stack[i]);
		i++;
	}
	rra(&a, 0);
	pb(&a, &b);
	rra(&a, 0);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	i = 0;
	while (i < 5)
	{
		printf(">> %i || >> %i\n", a.stack[i], b.stack[i]);
		i++;
	}
	return (0);
}
