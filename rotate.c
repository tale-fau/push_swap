/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:44 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/30 19:21:19 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_astack *a, int bool)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = a->stack[0];
	while (i < a->size - 1)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->stack[a->size - 1] = tmp;
	if (bool == 0)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_bstack *b, int bool)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = b->stack[0];
	while (i < b->size - 1)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[b->size - 1] = tmp;
	if (bool == 0)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_astack *a, t_bstack *b)
{
	ra(a, 1);
	rb(b, 1);
	ft_putstr_fd("rr\n", 1);
}
