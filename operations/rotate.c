/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:44 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 16:16:25 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *s, char id)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->stack[0];
	while (i < s->size - 1)
	{
		s->stack[i] = s->stack[i + 1];
		i++;
	}
	s->stack[s->size - 1] = tmp;
	if (id == 'a')
		ft_putstr_fd("ra\n", 1);
	else
		ft_putstr_fd("rb\n", 1);
}
