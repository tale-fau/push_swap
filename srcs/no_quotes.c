/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_quotes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:10:43 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 20:59:59 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_skip_zero(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i] == '0')
		i++;
	return (i);
}

int	for__minus(char *num)
{
	int	i;
	int	len;

	i = ft_skip_zero(num);
	len = ft_strlen(num + i);
	if (len > 11)
		return (1);
	if (is_num(num + i) == 1)
		return (1);
	if (len == 11 && ft_strncmp(num + i, "-2147483648", len) > 0)
		return (1);
	return (0);
}

int	check_size(char *num)
{
	int	i;
	int	len;

	i = 0;
	while (*num == '0')
		num++;
	if (num[0] == '-')
	{
		if (for__minus(num) == 1)
			return (1);
	}
	else
	{
		i = ft_skip_zero(num);
		len = ft_strlen(num + i);
		if (len > 10)
			return (1);
		if (is_num(num + i) == 1)
			return (1);
		if (len == 10 && ft_strncmp(num + i, "2147483647", len) > 0)
			return (1);
	}
	if (ft_isdigit(num + i) == 1)
		return (1);
	return (0);
}

int	to__checks(t_stack *a, t_stack *b, int ac, char **av)
{
	int			i;
	long int	num;

	i = 1;
	while (i < ac)
	{
		if (check_size(av[i]) == 1)
		{
			free_stack(a, b);
			return (error());
		}
		num = ft_atoi(av[i]);
		if (check_num(num, a, i) == 1)
		{
			free_stack(a, b);
			return (error());
		}
		a->stack[i - 1] = num;
		i++;
	}
	return (0);
}

int	no_quotes(t_stack *a, t_stack *b, int ac, char **av)
{
	int			i;
	int			len;

	i = 1;
	len = ac - 1;
	a->stack = (int *)malloc(sizeof(int) * len);
	b->stack = (int *)malloc(sizeof(int) * len);
	if (a->stack == NULL || b->stack == NULL)
		return (error());
	a->size = len;
	b->size = 0;
	if (to__checks(a, b, ac, av) == 1)
		return (1);
	return (0);
}
