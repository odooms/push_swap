/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:25:48 by odooms            #+#    #+#             */
/*   Updated: 2019/08/28 09:16:17 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int		data;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

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

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(6);
	insert(7);
	insert(4);
	insert(5);
	makelist();
	return (0);
}
