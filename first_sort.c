/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:04:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 10:56:31 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_trie(int *clone, int size)
{
	int	tmp;
	int i;

	i = -1;
	while (++i < size - 1)
	{
		if (clone[i] > clone[i + 1])
		{
			tmp = clone[i];
			clone[i] = clone[i + 1];
			clone[i + 1] = tmp;
			i = -1;
		}
	}
/* 	printf("Stack clone : \n");
	for(int i = 0; i < size; i++)
		printf("%d\n", clone[i]);
	printf("FINNN---------------\n"); */
}