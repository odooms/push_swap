/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:07:04 by odooms            #+#    #+#             */
/*   Updated: 2019/09/25 14:27:09 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_A(t_list **A)
{
	int temp; 
	temp = remove_top(&(*A));
	append(&(*A), temp);
}

void	rotate_B(t_list **B)
{
	int temp;
	temp = remove_top(&(*B));
	append(&(*B), temp);
}

void	rotate_A_B(t_list **A, t_list **B)
{
	int temp_b;
	int temp_a;
	temp_a = remove_top(&(*A));
	append(&(*A), temp_a);
	temp_b = remove_top(&(*B));
	append(&(*B), temp_b);
}
