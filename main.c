/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:22 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/06 14:19:23 by tale-fau         ###   ########.fr       */
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
	order(&a, &b);
	//debug(&a);
	return (0);
}
