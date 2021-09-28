/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:49:44 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/27 15:49:51 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(char *a)
{
	int	tmp;
	int	i;
	int	max;

	i = 0;
	max = ft_strlen(a) - 1;
	tmp = a[0];
	while (i <= max)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[max] = tmp;
}

void	rb(char *b)
{
	int	tmp;
	int	i;
	int	max;

	i = 0;
	max = ft_strlen(b) - 1;
	tmp = b[0];
	while (i <= max)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[max] = tmp;
}

void	rr(char *a, char *b)
{
	ra(a);
	rb(b);
}
