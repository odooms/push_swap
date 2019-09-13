/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:37 by odooms            #+#    #+#             */
/*   Updated: 2019/09/13 13:51:04 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include "libft/libft.h"
#include <stdlib.h>

typedef struct	s_list
{
	int		data;
	struct s_list *next; 
}t_list;

struct s_list *head = NULL;
void	makelist(struct s_list *B, struct s_list *A);
void	add(int data, struct s_list* next);
struct s_list	create(int data, struct s_list* next);
void	prepend(struct s_list **A, int data);
void	append(struct s_list** end, int data);
int 	remove_top(struct s_list** head);
struct	s_list	remove_bottom(struct s_list *bottom);
void	pa();

#endif
