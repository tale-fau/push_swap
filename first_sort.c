/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:04:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/08 23:58:36 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* 
int	partition(int *str, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = str[high];
	i = (low - 1);
	j = low;
	while (j < high)
	{
		if (str[j] <= pivot)
		{
			++i;
			ft_swap(&str[i], &str[j]);
		}
		j++;
	}
	ft_swap(&str[i + 1], &str[high]);
	return (i + 1);
}

void	first_quicksort(int *str, int low, int high)
{
	int	ret;

	debug(str, 13);

	if (low < high)
	{
		ret = partition(str, low, high);
		first_quicksort(str, low, ret - 1);
		first_quicksort(str, ret + 1, high);
	}
}
 */

/* static int	partition(int *tab, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[high];
	i = (low - 1);
	j = low;
	while (j < high)
	{
		if (tab[j] <= pivot)
		{
			++i;
			ft_swap(&tab[i], &tab[j]);
		}
		++j;
	}
	ft_swap(&tab[i + 1], &tab[high]);
	return (i + 1);
}

void	first_quicksort(int *tab, int low, int high)
{
	int	p_i;

	if (low < high)
	{
		p_i = partition(tab, low, high);
		first_quicksort(tab, low, p_i - 1);
		first_quicksort(tab, p_i + 1, high);
	}
} */

void	ft_trie(int *clone, int size)
{
	int	tmp;
	int i;

	printf("Stack clone : \n");
	for(int i = 0; i < size; i++)
		printf("%d\n", clone[i]);
	printf("FINNN---------------\n");
	
	printf("Valeur de size : %d\n", size);
	i = -1;
	while (clone[++i])
	{
		if (clone[i] > clone[i + 1])
		{
			tmp = clone[i];
			clone[i] = clone[i + 1];
			clone[i + 1] = tmp;
			i = -1;
		}
	}
	printf("Stack clone : \n");
	for(int i = 0; i < size; i++)
		printf("%d\n", clone[i]);
	printf("FINNN---------------\n");
}