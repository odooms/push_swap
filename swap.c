/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:11:29 by odooms            #+#    #+#             */
/*   Updated: 2019/09/17 14:04:53 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_A(struct s_list *A)
{
	int temp_1;
	int temp_2;
	temp_1 = remove_top(&A);
	temp_2 = remove_top(&A);
	prepend(&A, temp_1);
	prepend(&A, temp_2);
	write(1, "sa\n", 3);
}

void	swap_B(struct s_list *B)
{
	int temp_1;
	int temp_2;
	temp_1 = remove_top(&B);
	temp_2 = remove_top(&B);
	prepend(&B, temp_1);
	prepend(&B, temp_2);
	write(1, "sb\n", 3);
}

void swap_A_B(struct s_list *A, struct s_list *B)
{
	swap_A(A);
	swap_B(B);
	write(1, "ss\n", 3);
}
