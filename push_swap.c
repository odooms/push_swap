/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/08/28 13:10:12 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	makelist()
{
	struct node *ptr = head;
	while (ptr != NULL)
	{
		ft_putnbr(ptr->data);
		ft_putchar('\n');
		ptr = ptr->next;
	}
	ft_putstr("- -\n");
	ft_putstr("a b\n");
}

void	insert(int data)
{
	struct node *link = (struct node*)malloc(sizeof(struct node));
	link->data = data;
	link->next = head;
	head = link;
}

int main(int argc, char **argv)
{
	int m;
	while (argc - 1 >= 1)
	{
		m = ft_atoi(argv[argc - 1]);
		insert(m);
		argc--;
	}
	makelist();
	return (0);
}
