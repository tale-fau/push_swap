/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:33 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 15:28:43 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	not_empty_astack(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	a->size += 1;
	b->size -= 1;
	i = a->size - 1;
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[0] = b->stack[0];
	i = 0;
	while (i < b->size)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[b->size] = 0;
}

void	pa(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	if (b->size == 0)
		return ;
	if (a->size == 0)
	{
		a->stack[0] = b->stack[0];
		a->size += 1;
		b->size -= 1;
		while (i < b->size)
		{
			b->stack[i] = b->stack[i + 1];
			i++;
		}
	}
	else
		not_empty_astack(a, b);
	//b->stack[b->size] = 0;
	ft_putstr_fd("pa\n", 1);
	//printf("pa       >>      a->stack[0] = %i et b->stack[0] = %i\n", a->stack[0], b->stack[0]);
}

 void	not_empty_bstack(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	a->size -= 1;
	b->size += 1;
	i = b->size - 1;
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[0] = a->stack[0];
	i = 0;
	while (i < a->size)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	if (a->size == 0)
		return ;
	if (b->size == 0)
	{
		b->stack[0] = a->stack[0];
		a->size -= 1;
		b->size += 1;
		while (i < a->size)
		{
			a->stack[i] = a->stack[i + 1];
			i++;
		}
	}
	else
		not_empty_bstack(a, b);
	a->stack[a->size] = 0;
	ft_putstr_fd("pb\n", 1);
	//printf("pb       >>      a->stack[0] = %i et b->stack[0] = %i\n", a->stack[0], b->stack[0]);
}

/* void	pa(t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	if (b->size == 0)
		return ;
	while (++i < a->size - 1)
		a->stack[i + 1] = a->stack[i];
	a->stack[0] = b->stack[0];
	a->size++;
	b->size--;
	i = -1;
	while (++i < b->size - 1)
		b->stack[i] = b->stack[i + 1];
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	if (a->size == 0)
		return ;
	while (++i < b->size - 1)
		b->stack[i + 1] = b->stack[i];
	b->stack[0] = a->stack[0];
	b->size++;
	a->size--;
	i = -1;
	while (++i < a->size - 1)
		a->stack[i] = a->stack[i + 1];
	ft_putstr_fd("pb\n", 1);
} */
