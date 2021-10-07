/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:04:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/07 17:54:36 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	partition(int str[], int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = str[high];
	i = (low - 1);
	j = low;
	while (j <= high - 1)
	{
		if (str[j] <= pivot)
		{
			i++;
			ft_swap(&str[i], &str[j]);
		}
		j++;
	}
	ft_swap(&str[i + 1], &str[high]);
	return (i + 1);
}

void	first_quicksort(int str[], int low, int high)
{
	int	ret;

	if (low < high)
	{
		ret = partition(str, low, high);
		first_quicksort(str, low, ret - 1);
		first_quicksort(str, ret + 1, high);
	}
}

int	clone_stack(t_stack *a)
{
	t_stack	a_clone;
	int		i;
	int		mediane;

	i = 0;
	a_clone.size = a->size;
	a_clone.stack = (int *)malloc(sizeof(int) * a_clone.size);
	if (a_clone.stack == NULL)
		return (1);
	while (i < a_clone.size)
	{
		a_clone.stack[i] = a->stack[i];
		i++;
	}
	first_quicksort(a_clone.stack, 0, i);
	mediane = a_clone.stack[(a_clone.size - 1) / 2];
	free(a_clone.stack);
	return (mediane);
}
