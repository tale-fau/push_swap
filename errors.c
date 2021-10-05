/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:43:44 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/05 18:53:11 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error(int i)
{
	static char	*ptr[3] = {"Malloc error\n"
		, "Stack numbers error\n", "truc\n"};

	ft_putstr_fd(ptr[i], 1);
	return (1);
}