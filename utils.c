/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:31:48 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 16:51:43 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_pushes(t_stack *a, t_stack *b, char id)
{
	if (id == 'a')
		pa(a, b);
	else
		pb(a, b);
}

void	to_reverse(t_stack *a, t_stack *b, char id)
{
	//printf("test 7\n");
	if (id == 'a')
	{
		ft_putstr_fd("reverse 3\n", 1);
		reverse(a, 'a');
	}
	else
		reverse(b, 'b');
}

void	to_rotate(t_stack *a, t_stack *b, char id)
{
	if (id == 'a')
		rotate(a, 'a');
	else
		rotate(b, 'b');
}
