/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:37:28 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 17:24:07 by user42           ###   ########.fr       */
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
		reverse(a, 'a');
	}
	else if (a->stack[0] > a->stack[1] && a->stack[1] < a->stack[2])
	{
		if (a->stack[0] > a->stack[2])
			rotate(a, 'a');
		else
			swap(a, 'a');
	}
	else if (a->stack[0] < a->stack[1] && a->stack[1] > a->stack[2])
	{
		if (a->stack[0] < a->stack[2])
		{
			reverse(a, 'a');
			swap(a, 'a');
		}
		else
		{
			reverse(a, 'a');
		}
	}
	return (1);
}

int	find_min(t_stack *a)
{
	int	i;
	int	min;

	i = -1;
	min = a->stack[0];
	while (++i < a->size)
	{
		if (a->stack[i] < a->stack[i + 1])
			min = a->stack[i + 1];
	}
	return (min);
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	pivot;

	pivot = 2;
	while (b->size != 3)
	{
		if (a->stack[0] <= pivot)
			pb(a, b);
		else
			rotate(a, 'a');
	}
	easy_sort_a(a);
	easy_sort_b(b);
	while (b->size > 0)
		pa(a, b);
}

int	easy_sort_a(t_stack *a)
{
	if (a->size < 2)
		return (1);
	else if (a->size == 2)
		return (sort_two_a(a));
	else if (a->size == 3)
		return (sort_three_a(a));
	else
		return (0);
}
