/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:45:48 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 16:43:03 by tale-fau         ###   ########.fr       */
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
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	rotate(t_stack *s, char id);
void	swap(t_stack *s, char id);
void	reverse(t_stack *s, char id);
void	free_stack(t_stack *a, t_stack *b);
void	to_pushes(t_stack *a, t_stack *b, char id);
void	to_reverse(t_stack *a, t_stack *b, char id);
void	to_rotate(t_stack *a, t_stack *b, char id);
void	first_quicksort(int str[], int low, int high);
void	sc_quicksort(t_stack *a, t_stack *b, int size, char id);
int		sorted_stack(t_stack *a);
int		clone_stack(t_stack *s, int size);
int		easy_sort_a(t_stack *a, int size);
int		easy_sort_b(t_stack *b, int size);
void	ft_trie(int *clone, int size);

void	debug(int *s, int size);
#endif