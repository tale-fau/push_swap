/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:56:26 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/06 11:49:34 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a, int bool)
{
	int		i;
	int		tmp;

	i = a->size - 1;
	tmp = a->stack[a->size - 1];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[0] = tmp;
	if (bool == 0)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *b, int bool)
{
	int	i;
	int	tmp;

	i = b->size - 1;
	tmp = b->stack[b->size - 1];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[0] = tmp;
	if (bool == 0)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 1);
	rrb(b, 1);
	ft_putstr_fd("rrr\n", 1);
}
