/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:38:29 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/05 15:32:13 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack *s)
{
	int	ret;
	int	i;

	i = 0;
	ret = s->stack[0];
	while (i < s->size)
	{
		if (s->stack[i] < ret)
		{
			ret = s->stack[i];
			s->rank = i;
		}
		i++;
	}
	return (ret);
}

void	first_or_last(t_stack *a, t_stack *b)
{
	int	min;

	min = find_min(a);
	if (a->rank >= (a->size / 2))
	{
		while (a->stack[0] != min)
			rra(a, 0);
		if (a->stack[0] == min)
			pb(a, b);
	}
	else
	{
		while (a->stack[0] != min)
			ra(a, 0);
		if (a->stack[0] == min)
			pb(a, b);
	}
}

void	order(t_stack *a, t_stack *b)
{
	while (a->size != 1)
		first_or_last(a, b);
	while (b->size != 0)
		pa(a, b);
}