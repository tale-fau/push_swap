/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:37:28 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 17:02:17 by tale-fau         ###   ########.fr       */
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
	printf("VALEUR DE a->size : %d\n", a->size);
	if (a->stack[0] > a->stack[1] && a->stack[1] > a->stack[2])
	{
		printf("Stack A 1: ---------------------------\n");
		for(int i = 0; i < a->size; i++)
			printf("%d\n", a->stack[i]);
		swap(a, 'a');
		ft_putstr_fd("Reverse 1\n", 1);
		reverse(a, 'a');
		printf("Stack A 2: ---------------------------\n");
		for(int i = 0; i < a->size; i++)
			printf("%d\n", a->stack[i]);
		printf("FINNNNNNNNNN--------------------------------------------\n");
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
			ft_putstr_fd("reverse 2\n", 1);
			reverse(a, 'a');
			swap(a, 'a');
		}
		else
		{
			ft_putstr_fd("reverse 3\n", 1);
			reverse(a, 'a');
		}
	}
	return (1);
}

int	easy_sort_a(t_stack *a, int size)
{
	//ft_putstr_fd("test 6\n", 1);
	printf("VALEUR DE SIZE = %d a->size : %d\n", size, a->size);
	if (size < 2)
		return (1);
	else if (size == 2)
		return (sort_two_a(a));
	else if (size == 3)
		return (sort_three_a(a));
	else
		return (0);
}