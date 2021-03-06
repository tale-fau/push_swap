/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:45:48 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/12 21:13:22 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int			size;
	int			rank;
	int			*stack;
}	t_stack;

int		no_quotes(t_stack *a, t_stack *b, int ac, char **av);
int		w_quotes(t_stack *a, t_stack *b, char *av);
int		check_num(long int num, t_stack *a, int len);
int		error(void);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	rotate(t_stack *s, char id);
void	swap(t_stack *s, char id);
void	reverse(t_stack *s, char id);
int		free_stack(t_stack *a, t_stack *b);
void	first_quicksort(int str[], int low, int high);
int		sorted_stack(t_stack *a);
int		*clone_stack(t_stack *s);
int		index_stack(t_stack *a);
int		easy_sort_a(t_stack *a);
int		easy_sort_b(t_stack *b);
void	ft_trie(int *clone, int size);
void	sort_five(t_stack *a, t_stack *b);
void	sort_stack(t_stack *a, t_stack *b);
int		ft_skip_zero(char *str);
int		is_num(char *str);
int		check_strsize(char *num);

void	debug(int *s, int size);
#endif
