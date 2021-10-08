/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:37:28 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/08 23:47:24 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_two(t_stack *s, char id)
{
	if (id == 'a')
	{
		if (s->stack[0] > s->stack[1])
			swap(s, id);
	}
	else
	{
		if (s->stack[0] < s->stack[1])
			swap(s, id);
	}
	return (1);
}

int	sort_three(t_stack *s, char id)
{
	if (s->stack[0] > s->stack[1] && s->stack[1] > s->stack[2])
	{
		swap(s, id);
		rr(s, id);
	}
	else if (s->stack[0] > s->stack[1] && s->stack[1] < s->stack[2])
	{
		if (s->stack[0] > s->stack[2])
			rs(s, id);
		else
			swap(s, id);
	}
	else if (s->stack[0] < s->stack[1] && s->stack[1] > s->stack[2])
	{
		if (s->stack[0] < s->stack[2])
		{
			rr(s, id);
			swap(s, id);
		}
		else
			rr(s, id);
	}
	return (1);
}

int	easy_sort(t_stack *s, int size, char id)
{
	//printf("VALEUR DE SIZE : %d\n\n", size);
	if (size < 2)
		return (1);
	else if (size == 2)
		return (sort_two(s, id));
	else if (size == 3)
		return (sort_three(s, id));
	else
		return (0);
}