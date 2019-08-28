/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/08/28 12:31:07 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	makelist()
{
	struct node *ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	printf("- -\n");
	printf("a b\n");
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
		m = atoi(argv[argc - 1]);
		insert(m);
		argc--;
	}
	makelist();
	return (0);
}
