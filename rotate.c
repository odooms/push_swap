/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:07:04 by odooms            #+#    #+#             */
/*   Updated: 2019/09/18 11:40:14 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_A(struct s_list *A)
{
	int temp; 
	temp = remove_top(&A);
	append(&A, temp);
	write(1, "ra\n", 3);
//	makelist(B, A);
}

void	rotate_B(struct s_list *B)
{
	int temp;
	temp = remove_top(&B);
	append(&B, temp);
	write(1, "rb\n", 3);
}

void	rotate_A_B(struct s_list  *A, struct s_list *B)
{
	int temp_b;
	int temp_a;
	temp_a = remove_top(&A);
	append(&A, temp_a);
	temp_b = remove_top(&B);
	append(&B, temp_b);
	write(1, "rr\n", 3);
}
