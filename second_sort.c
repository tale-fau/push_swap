/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:09:37 by tale-fau          #+#    #+#             */
/*   Updated: 2021/10/08 23:55:25 by tale-fau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	debug(int *s, int size)
{
	for (int i = 0; i < size; i++)
		printf(">%d\n", s[i]);
}

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
	//first_quicksort(clone, 0, i);
	//int save = clone[0];
	//int j = 0;
	//while (j < size - 1)
	//{
	//	clone[j] = clone[j + 1];
	//	j++;
	//}
	//clone[j] = save;
	ft_trie(clone, size);
	mediane = clone[((size - 1) / 2)];
	/*printf("Stack CLONE :\n");
	debug(clone, size);
	printf("%d\n", mediane);
	printf("FINNNnnnnNNNNNNNNNNNNNN\n\n");*/
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
		while (size - rota++)
			to_rotate(a, b, id);
	else
		while (rota--)
			to_reverse(a, b, id);
}

static int	main_partition(t_stack *a, t_stack *b, int size, char id, int *rot)
{
	int	pivot;
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (id == 'a')
		pivot = clone_stack(a, size);
	else
		pivot = clone_stack(b, size);
	//printf("PUTAIN DE VALEUR DU PIVOT :::: %d -------------------------------------\n", pivot);
	while (i < size)
	{
		if (id == 'a' && a->stack[0] <= pivot && ++ret)
			pb(a, b);
		else if (id == 'b' && b->stack[0] >= pivot && ++ret)
			pa(a, b);
		else if (id == 'a' && a->stack[0] > pivot && ++(*rot))
			rs(a, id);
		else if (id == 'b' && b->stack[0] < pivot && ++(*rot))
			rs(b, id);
		i++;
	}
	return (ret);
}

void	sc_quicksort(t_stack *a, t_stack *b, int size, char id)
{
	int	ret;
	int	rota_count;

	//printf("STPPPPPPP\n\n\n");
	if (id == 'a')
	{
		if (easy_sort(a, size, id) == 1)
			return ;
	}
	else
		if (easy_sort(b, size, id) == 1)
			return ;
	
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
		sc_quicksort(a, b, size - ret, id);
		if (id == 'a')
			sc_quicksort(a, b, ret, 'b');
		else
			sc_quicksort(a, b, ret, 'a');
	}
	while (ret)
	{
		to_pushes(a, b, ret, id);
		--ret;
	}
}
