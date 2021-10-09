/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:56:26 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 17:53:29 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_stack *s, char id)
{
	int		i;
	int		tmp;

	i = s->size - 1;
	tmp = s->stack[s->size - 1];
	while (i > 0)
	{
		s->stack[i] = s->stack[i - 1];
		i--;
	}
	s->stack[0] = tmp;
	if (id == 'a')
		ft_putstr_fd("rra\n", 1);
	else
		ft_putstr_fd("rrb\n", 1);
}
