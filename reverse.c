/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:38:51 by odooms            #+#    #+#             */
/*   Updated: 2019/09/16 12:01:44 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_A()
{
	int temp;
	temp = remove_bottom(A);
	prepend(&A, temp);
}

void	reverse_B()
{
	int temp;
	temp = remove_bottom(A);
	prepend(&A, temp);
}

void   reverse_A_B()
{
	reverse_A();
	reverse_B();
}
