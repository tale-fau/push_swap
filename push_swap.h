/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:45:48 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/07 15:38:21 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int			size;
	int			rank;
	int			*stack;
}	t_stack;

int		no_quotes(t_stack *a, t_stack *b, int ac, char **av);
int		w_quotes(t_stack *a, t_stack *b, char *av);
int		check_num(long int num, t_stack *a, int len);
int		error(int i);
void	order(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a, int bool);
void	rb(t_stack *b, int bool);
void	rr(t_stack *a, t_stack *b);
void	aswap(t_stack *a, int bool);
void	bswap(t_stack *b, int bool);
void	ss(t_stack *a, t_stack *b);
void	rra(t_stack *a, int bool);
void	rrb(t_stack *b, int bool);
void	rrr(t_stack *a, t_stack *b);
void	free_stack(t_stack *a, t_stack *b);
int		sorted_stack(t_stack *a);
int		clone_stack(t_stack *a);
int		easy_sort(t_stack *a, t_stack *b)

void	debug(t_stack *s);

#endif