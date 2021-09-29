/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:56:26 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/29 19:24:14 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_astack *a)
{
	int		i;
	int		*tmp;

	i = a->size;
	tmp = a->stack[a->size - 1];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[0] = tmp;
}

void	rrb(t_bstack *b)
{
	int	i;
	int	*tmp;

	i = b->size;
	tmp = b->stack[a->size - 1];
	while (i < 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[0] = tmp;
}

void	rrr(t_astack *a, t_bstack *b)
{
	rra(a);
	rrb(b);
}