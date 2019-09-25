/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:38:51 by odooms            #+#    #+#             */
/*   Updated: 2019/09/25 14:34:08 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_A(t_list **A)
{
	int temp;
	temp = remove_bottom((*A));
	prepend(&(*A), temp);
}

void	reverse_B(t_list **B)
{
	int temp;
	temp = remove_bottom((*B));
	prepend(&(*B), temp);
}

void   reverse_A_B(t_list **A, t_list **B)
{
	reverse_A(&(*A));
	reverse_B(&(*B));
}
