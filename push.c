/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:06:02 by odooms            #+#    #+#             */
/*   Updated: 2019/09/18 11:32:32 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_B(struct s_list *A)
{
//	struct s_list *A = NULL;
	struct s_list *B = NULL;
	
	int	temp;
	temp = remove_top(&A);
	prepend(&B, temp);
	write(1, "pb\n", 3);
}

void	push_A(struct s_list *B)
{
	struct s_list *A = NULL;
//	struct s_list *B = NULL;
	int	temp;
	temp = remove_top(&B);
	prepend(&A, temp);
	write(1, "pa\n", 3);
}

