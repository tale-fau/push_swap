/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:14:21 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 17:27:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_stack(t_stack *a)
{
	int	*copy;
	int	i;
	int	j;

	i = -1;
	copy = clone_stack(a);
	if (copy == NULL)
		return (0);
	while (++i < a->size)
	{
		j = -1;
		while (++j < a->size)
		{
			if (a->stack[i] == copy[j])
			{
				a->stack[i] = j;
				break ;
			}
		}		
	}
	free(copy);
	return (1);
}
