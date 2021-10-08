/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:31:48 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/08 22:20:20 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_pushes(t_stack *a, t_stack *b, int ret, char id)
{
	if (id == 'a')
		pa(a, b);
	else
		pb(a, b);
	ret--;
}

void	to_reverse(t_stack *a, t_stack *b, char id)
{
	if (id == 'a')
		rr(a, 'a');
	else
		rr(b, 'b');
}

void	to_rotate(t_stack *a, t_stack *b, char id)
{
	if (id == 'a')
		rs(a, 'a');
	else
		rs(b, 'b');
}
