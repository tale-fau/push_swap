/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wq_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:53:50 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 21:00:36 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if ((!(str[i] >= '0' && str[i] <= '9')))
			return (1);
	return (0);
}

int	for_minus(char *num)
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

int	check_strsize(char *num)
{
	int	i;
	int	len;

	i = 0;
	while (*num == '0')
		num++;
	if (num[0] == '-')
	{
		if (for_minus(num) == 1)
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
