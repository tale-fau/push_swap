/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:52:52 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 20:58:05 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_stack(t_stack *a, t_stack *b)
{
	free(a->stack);
	free(b->stack);
	a->stack = NULL;
	b->stack = NULL;
	return (1);
}
