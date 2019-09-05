/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:37 by odooms            #+#    #+#             */
/*   Updated: 2019/09/05 08:27:20 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdlib.h>

struct node
{
	int		data;
	struct node *next;
};

struct node *head = NULL;

void	makelist(struct node *s_b, struct node *s_a);
//void	makelist(struct node *s_a);
void	swap(struct node pos1, struct node pos2);
void	selectnode(struct node *s_a);
void	stack_a(struct node **s_a, int data);
void	stack_b(struct node **s_b, int data);
void	sort(int data);
void	push(int value);

#endif
