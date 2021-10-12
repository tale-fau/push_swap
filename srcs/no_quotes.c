/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_quotes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:10:43 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 14:25:50 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_size(char *num)
{
	if (num[0] == '-')
	{
		if (ft_strlen(num) > (size_t)11)
			return (1);
	}
	else if (ft_strlen(num) > 10)
		return (1);
	if (ft_isdigit(num) == 1)
		return (1);
	return (0);
}

int	no_quotes(t_stack *a, t_stack *b, int ac, char **av)
{
	int			i;
	int			len;
	long int	num;

	i = 1;
	len = ac - 1;
	a->stack = (int *)malloc(sizeof(int) * len);
	b->stack = (int *)malloc(sizeof(int) * len);
	if (a->stack == NULL || b->stack == NULL)
		return (error());
	a->size = len;
	b->size = 0;
	while (i < ac)
	{
		if (check_size(av[i]) == 1)
			return (error());
		num = ft_atoi(av[i]);
		if (check_num(num, a, i) == 1)
			return (error());
		a->stack[i - 1] = num;
		i++;
	}
	return (0);
}
