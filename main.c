/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:22 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/30 19:20:48 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_astack	a;
	t_bstack	b;

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
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	rrr(&a, &b);
	i = 0;
	while (i < 5)
	{
		printf(">> %i || >> %i\n", a.stack[i], b.stack[i]);
		i++;
	}
	return (0);
}
