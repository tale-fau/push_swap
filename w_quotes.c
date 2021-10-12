/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_quotes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:27:00 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 12:14:37 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_strsize(char *num)
{
	if (num[0] == '-')
	{
		if (ft_strlen(num) > 11)
			return (1);
	}
	else if (ft_strlen(num) > 10)
		return (1);
	if (ft_isdigit(num) == 1)
		return (error());
	return (0);
}

int	set_stack(t_stack *a, t_stack *b, int len)
{
	a->size = len;
	b->size = 0;
	a->stack = (int *)malloc(sizeof(int) * len);
	b->stack = (int *)malloc(sizeof(int) * len);
	if (a->stack == NULL || b->stack == NULL)
		return (error());
	return (0);
}

int	w_quotes(t_stack *a, t_stack *b, char *av)
{
	int				i;
	long int		num;
	int				len;
	char			**tab;

	i = -1;
	tab = ft_split(av, ' ');
	if (tab == NULL)
		return (error());
	len = ft_tablen(tab);
	set_stack(a, b, len);
	while (tab[++i])
	{
		if (check_strsize(tab[i]) == 1)
			return (error());
		num = ft_atoi(tab[i]);
		if (check_num(num, a, i + 1) == 1)
			return (error());
		a->stack[i] = num;
	}
	return (0);
}
