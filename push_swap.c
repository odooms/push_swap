/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 09:49:18 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prepend(t_list **a, int data)
{
	struct s_list	*link_a;

	link_a = (struct s_list*)malloc(sizeof(struct s_list));
	link_a->data = data;
	link_a->next = *a;
	*a = link_a;
}

void	append(t_list **end, int num)
{
	struct s_list	*tmp;
	struct s_list	*last;

	tmp = (struct s_list*)malloc(sizeof(struct s_list));
	last = *end;
	tmp->data = num;
	tmp->next = NULL;
	if (*end == NULL)
	{
		end = &tmp;
		return ;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = tmp;
}

int		remove_bottom(t_list *bottom)
{
	int				result;
	struct s_list	*move;
	struct s_list	*back;

	move = bottom;
	back = NULL;
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

int		remove_top(t_list **top)
{
	int				result;
	struct s_list	*tmp;

	if (*top == NULL)
		return (0);
	tmp = *top;
	result = tmp->data;
	(*top) = (*top)->next;
	if (tmp == *top)
		top = NULL;
	free(tmp);
	return (result);
}
