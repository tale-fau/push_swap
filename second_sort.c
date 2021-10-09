/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:09:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/09 18:20:30 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	debug(int *s, int size)
{
	for (int i = 0; i < size; i++)
		printf(">%d\n", s[i]);
} */

int	clone_stack(t_stack *s, int size)
{
	int		*clone;
	int		i;
	int		mediane;

	i = -1;
	clone = (int *)malloc(sizeof(int) * size);
	if (clone == NULL)
		return (1);
	while (++i < size)
		clone[i] = s->stack[i];
	ft_trie(clone, size);
	mediane = clone[((size - 1) / 2)];
//	printf("PIVOT ==== %i\n", mediane);
//	free(clone);
	return (mediane);
}

void	rotation(t_stack *a, t_stack *b, int rota, char id)
{
	int	size;

	if (id == 'a')
		size = a->size;
	else
		size = b->size;
	if (rota > size / 2)
	{
		while (size - rota++)
		{
			//ft_putstr_fd("test 7\n", 1);
 			to_rotate(a, b, id);
		}
	}
	else
	{
		while (rota--)
		{
			//printf("rota == %i\n", rota);
			//ft_putstr_fd("ERGWERTWERTWEr\n", 1);
			to_reverse(a, b, id);
		}
	}
}

static int	main_partition(t_stack *a, t_stack *b, int size, char id, int *rot)
{
	int	pivot;
	int	i;
	int	ret;

	i = 0;
	if (id == 'a')
		pivot = clone_stack(a, size);
	else
		pivot = clone_stack(b, size);
	ret = 0;
	while (i < size)
	{
		if (id == 'a' && a->stack[0] <= pivot && ++ret)
		{
			ft_putstr_fd("test 8\n", 1);
			pb(a, b);
		}
		else if (id == 'b' && b->stack[0] >= pivot && ++ret)
		{
			ft_putstr_fd("test 9\n", 1);
			pa(a, b);
		}
		else if (id == 'a' && a->stack[0] > pivot && ++(*rot))
		{
			//ft_putstr_fd("test 10\n", 1);
			rotate(a, id);
		}
		else if (id == 'b' && b->stack[0] < pivot && ++(*rot))
		{
			//ft_putstr_fd("test 11\n", 1);
			rotate(b, id);
		}
		++i;
	}
	return (ret);
}

void	sc_quicksort(t_stack *a, t_stack *b, int size, char id)
{
	int	ret;
	int	rota_count;

	if (id == 'a')
	{
		ft_putstr_fd("a->size =", 1);
		ft_putnbr_fd(a->size, 1);
		ft_putstr_fd("et size (avec id == a) =", 1);
		ft_putnbr_fd(size, 1);
		ft_putchar_fd('\n', 1);
		if (easy_sort_a(a, size) == 1)
			return ;
	}
	else
	{
		ft_putstr_fd("b->size =", 1);
		ft_putnbr_fd(b->size, 1);
		ft_putstr_fd("et size (avec id == b) =", 1);
		ft_putnbr_fd(size, 1);
		ft_putchar_fd('\n', 1);
		if (easy_sort_b(b, size) == 1)
			return ;
	}
	rota_count = 0;
	ret = main_partition(a, b, size, id, &rota_count);
	/*printf("Stack A :\n");
	debug(a->stack, a->size);
	printf("Stack B :\n");
	debug(b->stack, b->size);
	printf("FINNNnnnnNNNNNNNNNNNNNN\n\n");*/
	if (a->size != 2)
		rotation(a, b, rota_count, id);
	if (size > 1)
	{
		ft_putstr_fd("SIZE - RET AVANT QUICKSORT 1 = ", 1);
		ft_putnbr_fd(size - ret, 1);
		ft_putchar_fd('\n', 1);
		sc_quicksort(a, b, size - ret, id);
		if (id == 'a')
		{
			ft_putstr_fd("RET AVANT QUICKSORT 2 PRIM = ", 1);
			ft_putnbr_fd(ret, 1);
			ft_putchar_fd('\n', 1);
			sc_quicksort(a, b, ret, 'b');
		}
		else
		{
			ft_putstr_fd("RET AVANT QUICKSORT 2BIS = ", 1);
			ft_putnbr_fd(ret, 1);
			ft_putchar_fd('\n', 1);
			sc_quicksort(a, b, ret, 'a');
		}
	}
	while (ret)
	{
		to_pushes(a, b, id);
		--ret;
	}
}
