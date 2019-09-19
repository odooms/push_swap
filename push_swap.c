/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/09/19 13:50:06 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prepend(struct s_list **A, int data)
{
	struct s_list *link_a = (struct s_list*)malloc(sizeof(struct s_list));
	link_a->data = data;
	link_a->next = *A;
	*A = link_a;
}

void	append(struct s_list** end, int num)
{
	struct s_list* tmp = (struct s_list*)malloc(sizeof(struct s_list));
	struct s_list *last = *end;
	tmp->data = num;
	tmp->next = NULL;
	if (*end == NULL)
	{
		end = &tmp;
		return ;
	}
	while (last->next != NULL)
	last = last->next;
	last->next = tmp;
	return ;
}

int remove_bottom(struct s_list *bottom)
{
	struct s_list *move = bottom;
	struct s_list *back = NULL;
	int result;
	while (move->next != NULL)
	{
		back = move;
		move = move->next;
	}
	if (back != NULL)
		back->next = NULL;
	result = back->data;
	if (move == bottom)
		bottom = NULL;
	result = move->data;		
	free(move);
	return (result);
}

int	remove_top(struct s_list** top)
{
	struct s_list* tmp = *top;
	int result = tmp->data;
	(*top) = (*top)->next;
	free(tmp);
	return (result);
}

