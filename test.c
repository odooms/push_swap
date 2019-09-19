/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:57:32 by odooms            #+#    #+#             */
/*   Updated: 2019/09/18 11:46:57 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int l;
	int m;
	struct s_list *B = NULL;
	struct s_list *A = NULL;
	while (argc - 1 >= 1)
	{
		m = ft_atoi(argv[argc - 1]);
		prepend(&A, m);
		argc--;
	}
	prepend(&B, 1);
	prepend(&B, 2);
	prepend(&B, 3);
	swap_A(A);
//	rotate_A(A);
//	push_A(B);	
	makelist(B, A);
	return (0);
}
