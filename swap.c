/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:55 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/30 18:48:41 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aswap(t_astack *a, int bool)
{
	int	tmp;

	tmp = a->stack[0];
	a->stack[0] = a->stack[1];
	a->stack[1] = tmp;
	if (bool == 0)
		ft_putstr_fd("sa\n", 1);
}

void	bswap(t_bstack *b, int bool)
{
	int	tmp;

	tmp = b->stack[0];
	b->stack[0] = b->stack[1];
	b->stack[1] = tmp;
	if (bool == 0)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_astack *a, t_bstack *b)
{
	aswap(a, 1);
	bswap(b, 1);
	ft_putstr_fd("ss\n", 1);
}
