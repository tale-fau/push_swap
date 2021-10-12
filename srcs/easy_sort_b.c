/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:11:05 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 21:11:04 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_two_b(t_stack *b)
{
	if (b->stack[0] < b->stack[1])
		swap(b, 'b');
	return (1);
}

int	sort_three_b(t_stack *b)
{
	if (b->stack[0] < b->stack[1] && b->stack[1] < b->stack[2])
	{
		swap(b, 'b');
		reverse(b, 'b');
	}
	else if (b->stack[0] < b->stack[1] && b->stack[1] > b->stack[2])
	{
		if (b->stack[0] < b->stack[2])
			rotate(b, 'b');
		else
			swap(b, 'b');
	}
	else if (b->stack[0] > b->stack[1] && b->stack[1] < b->stack[2])
	{
		if (b->stack[0] > b->stack[2])
		{
			reverse(b, 'b');
			swap(b, 'b');
		}
		else
			reverse(b, 'b');
	}
	return (1);
}

int	easy_sort_b(t_stack *b)
{
	if (b->size < 2)
		return (1);
	else if (b->size == 2)
		return (sort_two_b(b));
	else if (b->size == 3)
		return (sort_three_b(b));
	else
		return (0);
}
