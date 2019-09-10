/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/09/10 14:37:02 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	makelist(struct s_list *B, struct s_list *A)
{
	struct s_list *ptr = A;
	
	while (ptr != NULL)
	{
		ft_putnbr(ptr->data);
		if (B != NULL)
		{
			ft_putchar(' ');
			ft_putnbr(B->data);
			B = B->next;
		}
		else
		{
			ft_putstr("  ");
		}
		ft_putchar('\n');
		ptr = ptr->next;
	}
	ft_putstr("- -\n");
	ft_putstr("a b\n");
}

void	prepend(struct s_list **A, int data)
{
	struct s_list *link_a = (struct s_list*)malloc(sizeof(struct s_list));
	link_a->data = data;
	link_a->next = *A;
	*A = link_a;
}

struct s_list	remove_bottom(struct s_list *bottom)
{
	struct s_list *move = bottom;
	struct s_list *back = NULL;
	while (move->next != NULL)
	{
		back = move;
		move = move->next;
	}
	if (back != NULL)
		back->next = NULL;
	if (move == bottom)
		bottom = NULL;
	free(move);
	return (*bottom);
}

struct s_list	remove_top(struct s_list *top)
{
	struct s_list *move = top;
	top = top->next;
	move->next = top;
	if (move == top)
		top = NULL;
	free(move);
	return (*top);
}

int main(int argc, char **argv)
{
	int m;
	struct s_list *B = NULL;
	struct s_list *A = NULL;
	while (argc - 1 >= 1)
	{
		m = ft_atoi(argv[argc - 1]);
		prepend(&A, m);
		argc--;
	}
	remove_top(A);
//	remove_bottom(A);
//	prepend(&B, 3);
	//prepend(&B, 5);
	makelist(B, A);
	return (0);
}
