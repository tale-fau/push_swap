/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:33:05 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/30 19:35:18 by tale-fau         ###   ########.fr       */
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

long int	ft_atoi(const char *c)
{
	int			i;
	int			sign;
	long int	ret;

	ret = 0;
	sign = 1;
	i = 0;
	while (is_blank(c[i]) == 1)
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '+')
			i++;
		else
		{
			sign = -1;
			i++;
		}
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		ret = (ret * 10) + (c[i] - 48);
		i++;
	}
	return (ret * sign);
}
