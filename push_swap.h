/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:37 by odooms            #+#    #+#             */
/*   Updated: 2019/08/28 13:51:14 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdlib.h>

struct node
{
	int		data;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void	makelist();
void	insert(int data);

#endif
