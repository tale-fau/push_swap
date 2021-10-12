/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:04:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 21:11:28 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_trie(int *clone, int size)
{
	int	tmp;
	int	i;

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
}
