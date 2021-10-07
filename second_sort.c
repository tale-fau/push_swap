/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:09:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/07 17:54:34 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_algo(t_stack *a, t_stack *b, char id)
{
	int	ret;
	int	rota_count;

	rota_count = 0;
	if (sort_first_cases(a, b) == 1)
		return ;
	ret = main_partition(a, b, id)
	if (a->size != 2)
}