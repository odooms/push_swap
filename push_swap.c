/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/09/05 09:37:08 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	makelist(struct node *s_b, struct node *s_a)
{
	struct node *ptr = s_a;
	
	while (ptr != NULL)
	{
		ft_putnbr(ptr->data);
		if (s_b != NULL)
		{
			ft_putchar(' ');
			ft_putnbr(s_b->data);
			s_b = s_b->next;
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

void	stack_a(struct node **s_a, int data)
{
	struct node *link_a = (struct node*)malloc(sizeof(struct node));
	link_a->data = data;
	link_a->next = *s_a;
	*s_a = link_a;
}

void	stack_b(struct node **s_b, int data)
{
	struct node *link_b = (struct node*)malloc(sizeof(struct node));
	link_b->data = data;
	link_b->next = *s_b;
	*s_b = link_b;
}

int main(int argc, char **argv)
{
	int m;
	struct node *s_b = NULL;
	struct node *s_a = NULL;
	while (argc - 1 >= 1)
	{
		m = ft_atoi(argv[argc - 1]);
		stack_a(&s_a, m);
		argc--;
	}
	stack_b(&s_b, 3);
	stack_b(&s_b, 5);
	makelist(s_b, s_a);
	return (0);
}
