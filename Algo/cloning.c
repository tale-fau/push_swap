/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cloning.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:35:20 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 12:12:26 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*clone_stack(t_stack *s)
{
	int		*clone;
	int		i;

	i = -1;
	clone = (int *)malloc(sizeof(int) * s->size);
	if (clone == NULL)
		return (NULL);
	while (++i < s->size)
		clone[i] = s->stack[i];
	ft_trie(clone, s->size);
	return (clone);
}