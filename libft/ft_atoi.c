/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:33:05 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 15:08:25 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_blank(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v'
		|| c == '\f' || c == ' ')
		return (1);
	return (0);
}

long int	ft_atoi(const char *str)
{
/* 	int			i;
	int			sign;
	long int	ret;

	ret = 0;
	sign = 1;
	i = 0;
	while (is_blank(c[i]) == 1)
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	if (c[i] == '+' || c[i] == '-')
		return (-1);
	while (c[i] >= '0' && c[i] <= '9')
	{
		ret = (ret * 10) + (c[i] - 48);
		i++;
	}
	return (ret * sign); */
	int		i;
	int		negative;
	long	result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negative *= -1;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + ((int)str[i++] - '0');
	if (result < 0 && (negative == 1))
		return (-1);
	else if (result < 0 && (negative == -1))
		return (0);
	return (result * negative);
}
