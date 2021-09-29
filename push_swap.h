/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:45:48 by tale-fau          #+#    #+#             */
/*   Updated: 2021/09/29 18:42:59 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_astack
{
	int			size;
	int			**stack;
}	t_astack;

typedef struct s_bstack
{
	int		size;
	int		**stack;
}	t_bstack;

int		no_quotes(t_astack *a, t_bstack *b, int ac, char **av);
int		w_quotes(t_astack *a, t_bstack *b, char *av);
int		check_num(int num, t_astack *a);
int		error(int i);
void	pa(t_astack *a, t_bstack *b);
void	pb(t_astack *a, t_bstack *b);
void	ra(char *a);
void	rb(char *b);
void	rr(char *a, char *b);
void	sa(char *a);
void	sb(char *b);
void	ss(char *a, char *b);
void	rra(t_astack *a);
void	rrb(t_bstack *b);

#endif