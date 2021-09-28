/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_quotes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:27:00 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/28 18:55:56 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	w_quotes(t_astack *a, t_bstack *b, char *av)
{
	int		i;
	int		num;
	char	**tab;

	i = 0;
	tab = ft_split(av, ' ');
	if (tab == NULL)
		return (error(1));
	a->size = ft_tablen(tab);
	b->size = a->size;
	a->stack = (int **)malloc(sizeof(int *) * a->size);
	b->stack = (int **)malloc(sizeof(int *) * b->size);
	if (a->stack == NULL || b->stack == NULL)
		return (error(1));
	while (tab[i])
	{
		num = ft_atoi(tab[i]);
		if (check_num(num, a) == 1)
			return (error(2));
		a->stack[i] = num;
		i++;
	}
	return (0);
}
