/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:37 by odooms            #+#    #+#             */
/*   Updated: 2019/09/16 12:01:41 by odooms           ###   ########.fr       */
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

void	makelist(struct s_list *B, struct s_list *A);
struct s_list	create(int data, struct s_list* next);
void	prepend(struct s_list **A, int data);
void	append(struct s_list** end, int data);
int 	remove_top(struct s_list** head);
int		remove_bottom(struct s_list *bottom);
void	push_B();
void    push_A();
void	rotate_A();
void	rotate_B();
void 	rotate_A_B();
void	swap_A();
void	swap_B();
void	swap_A_B();
void	reverse_A();
void	reverse_B();
void	reverse_A_B();


#endif
