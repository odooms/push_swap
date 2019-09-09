/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/09/09 15:39:09 by odooms           ###   ########.fr       */
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

/*void	stack_b(struct node **s_b, int data)
{
	struct node *link_b = (struct node*)malloc(sizeof(struct node));
	link_b->data = data;
	link_b->next = *s_b;
	*s_b = link_b;
}*/

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
	prepend(&B, 3);
	prepend(&B, 5);
	makelist(B, A);
	return (0);
}
