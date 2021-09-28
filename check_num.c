/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:37:28 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/28 18:52:55 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(int num, t_astack *a)
{
	int	i;

	i = 0;
	if (num > 2147483647 || num < -2147483648)
		return (1);
	while (i < a->size)
	{
		if (a->stack[i] == num)
			return (1);
		i++;
	}
	return (0);
}
