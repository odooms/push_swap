/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:37 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 10:55:50 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft/libft.h"
# include "get_next_line.h"
# include <stdlib.h>

typedef	struct		s_list
{
	int				data;
	struct	s_list	*next;
}					t_list;

void	makelist(t_list *b, t_list *a);
int		checker(t_list *a, t_list *b);
void	prepend(t_list **a, int data);
void	append(t_list **end, int data);
int		remove_top(t_list **top);
int		remove_bottom(t_list *bottom);
void	push_b(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_a_b(t_list **a, t_list **b);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_a_b(t_list **a, t_list **b);
void	reverse_a(t_list **a);
void	reverse_b(t_list **b);
void	reverse_a_b(t_list **a, t_list **b);

#endif
