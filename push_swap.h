/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:37 by odooms            #+#    #+#             */
/*   Updated: 2019/09/25 14:55:52 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include "libft/libft.h"
#include "get_next_line.h"
#include <stdlib.h>

typedef	struct	s_list
{
	int				data;
	struct	s_list	*next; 
}				t_list;

void	makelist(t_list *B, t_list *A);
void	checker(t_list *A, t_list *B);
void	prepend(t_list **A, int data);
void	append(t_list** end, int data);
int 	remove_top(t_list** top);
int		remove_bottom(t_list *bottom);
void	push_B(t_list **A, t_list **B);
void    push_A(t_list **A, t_list **B);
void	rotate_A(t_list **A);
void	rotate_B(t_list **B);
void 	rotate_A_B(t_list **A, t_list **B);
void	swap_A(t_list **A);
void	swap_B(t_list **B);
void	swap_A_B(t_list **A, t_list **B);
void	reverse_A(t_list **A);
void	reverse_B(t_list **B);
void	reverse_A_B(t_list **A, t_list **B);

#endif
