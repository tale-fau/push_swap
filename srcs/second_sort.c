/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:09:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 21:11:55 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_bigstack(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = a->size;
	while (sorted_stack(a) == 0)
	{
		j = -1;
		while (++j < size)
		{
			if (((a->stack[0] >> i) & 1) == 1)
				rotate(a, 'a');
			else
				pb(a, b);
		}
		while (b->size > 0)
			pa(a, b);
		i++;
	}
}

void	sort_stack(t_stack *a, t_stack *b)
{
	if (a->size < 4)
		easy_sort_a(a);
	else if (a->size == 5)
		sort_five(a, b);
	else
		sort_bigstack(a, b);
}
