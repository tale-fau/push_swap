/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:37:28 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 15:24:32 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_two_a(t_stack *a)
{
	if (a->stack[0] > a->stack[1])
		swap(a, 'a');
	return (1);
}

int	sort_three_a(t_stack *a)
{
	if (a->stack[0] > a->stack[1] && a->stack[1] > a->stack[2])
	{
		swap(a, 'a');
		rr(a, 'a');
	}
	else if (a->stack[0] > a->stack[1] && a->stack[1] < a->stack[2])
	{
		if (a->stack[0] > a->stack[2])
			rs(a, 'a');
		else
			swap(a, 'a');
	}
	else if (a->stack[0] < a->stack[1] && a->stack[1] > a->stack[2])
	{
		if (a->stack[0] < a->stack[2])
		{
			rr(a, 'a');
			swap(a, 'a');
		}
		else
			rr(a, 'a');
	}
	return (1);
}

int	easy_sort_a(t_stack *a, int size)
{
	if (size < 2)
		return (1);
	else if (size == 2)
		return (sort_two_a(a));
	else if (size == 3)
		return (sort_three_a(a));
	else
		return (0);
}