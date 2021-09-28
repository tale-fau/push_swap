/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_quotes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:10:43 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/28 18:55:53 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	no_quotes(t_astack *a, t_bstack *b, int ac, char **av)
{
	int	i;
	int	num;

	i = 1;
	a->stack = (int **)malloc(sizeof(int *) * ac - 1);
	b->stack = (int **)malloc(sizeof(int *) * ac - 1);
	if (a->stack == NULL || b->stack == NULL)
		return (error(1));
	a->size = ac - 1;
	b->size = ac - 1;
	while (i < ac)
	{
		num = ft_atoi(av[i]);
		if (check_num(num, a) == 1)
			return (error(2));
		a->stack[i - 1] = num;
		i++;
	}
	return (0);
}
