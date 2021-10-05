/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:37:28 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/05 19:09:47 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(int num, t_stack *a, int len)
{
	int	i;

	i = 0;
	if (num > 2147483647 || num < -2147483648)
		return (1);
	while (i < len - 1)
	{
		if (a->stack[i] == num) {
			ft_putnbr_fd(i, 1);
			ft_putchar_fd('a', 1);
			return (1);
		}
		i++;
	}
	return (0);
}
