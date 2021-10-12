/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:52:52 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 16:40:16 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
/*	while (a->stack && a->stack[i])
	{
		free(&a->stack[i]);
		i++;
	}
	i = 0;
	while (b->stack && b->stack[i])
	{
		free(&b->stack[i]);
		i++;
	}*/
	free(a->stack);
	free(b->stack);
	a->stack = NULL;
	b->stack = NULL;
}
