/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:37:28 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/07 15:38:52 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sort_two;

sort_three; */

int	easy_sort(t_stack *a, t_stack *b)
{
	if (a->size < 2)
		return (1);
	if (a->size == 2)
		return (sort_two(a, b));
	if (a->size == 3)
		return (sort_three(a, b));
}