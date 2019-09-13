/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/09/13 16:25:59 by odooms           ###   ########.fr       */
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
	free(move);
	return (result);
	//return (*bottom);
}

int	remove_top(struct s_list** head)
{
	struct s_list* tmp = *head;
	int result = tmp->data;
	(*head) = (*head)->next;
	free(tmp);
	return (result);
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
	/*-------swap--A-----
	int temp = remove_top(&A);
	int x = remove_top(&A);
	prepend(&A, temp);
	prepend(&A, x);*/

	/*-------push-to-B----
	int temp = remove_top(&A);
	prepend(&B, temp);*/

	/*---rotate--A------
	int temp = remove_top(&A);
	append(&A, temp);*/

	/*---reverse--rotate--A-*/
	int temp = remove_bottom(A);
	prepend(&A, temp);
//	pa();
	makelist(B, A);
//	perpend(B, 4);
//	perpend(B, 7);
//	perpend(B, 2);
//	sleep(1000);
	return (0);
}

