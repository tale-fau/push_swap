/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:55 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/01 18:27:06 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aswap(t_stack *a, int bool)
{
	int	tmp;

	tmp = a->stack[0];
	a->stack[0] = a->stack[1];
	a->stack[1] = tmp;
	if (bool == 0)
		ft_putstr_fd("sa\n", 1);
}

void	bswap(t_stack *b, int bool)
{
	int	tmp;

	tmp = b->stack[0];
	b->stack[0] = b->stack[1];
	b->stack[1] = tmp;
	if (bool == 0)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	aswap(a, 1);
	bswap(b, 1);
	ft_putstr_fd("ss\n", 1);
}
