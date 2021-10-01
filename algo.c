/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:38:29 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/01 18:34:46 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack *s)
{
	int	ret;
	int	i;

	i = 0;
	ret = s->stack[0];
	while (i < s->size)
	{
		if (s->stack[i] < ret)
			ret = s->stack[i];
		i++;
	}
	return (ret);
}

int	order(t_stack *a, t_stack *b)
{
	int	min;

	min = find_min(a);
}