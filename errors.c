/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:43:44 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/06 12:11:29 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error(int i)
{
	static char	*ptr[4] = {"Malloc error\n"
		, "Stack numbers error\n"
		, "Check num error\n"
		, "Invalid characters\n"};

	ft_putstr_fd(ptr[i], 1);
	return (1);
}