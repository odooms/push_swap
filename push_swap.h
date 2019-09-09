/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:37 by odooms            #+#    #+#             */
/*   Updated: 2019/09/09 16:42:02 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdlib.h>

typedef struct	s_list
{
	int		data;
	struct s_list *next;
}t_list;

struct s_list *head = NULL;

void	makelist(struct s_list *B, struct s_list *A);
//void	makelist(struct node *s_a);
//void	swap(struct node pos1, struct node pos2);
//void	selectnode(struct node *s_a);
void	add(int data, s_list* next)
void	prepend(struct s_list **A, int data);
void	append(struct s_list **B, int data);
struct	s_list	remove_top(struct s_list *top);
struct	s_list	remove_bottom(struct s_list *bottom);
//void	sort(int data);
//void	push(int value);

#endif
