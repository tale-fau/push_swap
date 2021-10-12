/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_quotes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:27:00 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 21:13:12 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	to_checks(t_stack *a, t_stack *b, char **tab)
{
	int			i;
	long int	num;

	i = -1;
	while (tab[++i])
	{
		if (check_strsize(tab[i]) == 1)
		{
			free_stack(a, b);
			ft_free_tab(tab);
			return (1);
		}
		num = ft_atoi(tab[i]);
		if (check_num(num, a, i + 1) == 1)
		{
			free_stack(a, b);
			ft_free_tab(tab);
			return (1);
		}
		a->stack[i] = num;
	}
	return (0);
}

int	w_quotes(t_stack *a, t_stack *b, char *av)
{
	int				len;
	char			**tab;

	tab = ft_split(av, ' ');
	if (tab == NULL)
		return (error());
	len = ft_tablen(tab);
	set_stack(a, b, len);
	if (to_checks(a, b, tab) == 1)
		return (error());
	ft_free_tab(tab);
	return (0);
}
