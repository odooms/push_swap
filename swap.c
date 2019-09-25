/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:11:29 by odooms            #+#    #+#             */
/*   Updated: 2019/09/25 14:34:15 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_A(t_list **A)
{
	int temp_1;
	int temp_2;
	temp_1 = remove_top(&(*A));
	temp_2 = remove_top(&(*A));
	prepend(&(*A), temp_1);
	prepend(&(*A), temp_2);
}

void	swap_B(t_list **B)
{
	int temp_1;
	int temp_2;
	temp_1 = remove_top(&(*B));
	temp_2 = remove_top(&(*B));
	prepend(&(*B), temp_1);
	prepend(&(*B), temp_2);
}

void swap_A_B(t_list **A, t_list **B)
{
	swap_A(&(*A));
	swap_B(&(*B));
}

