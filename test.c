/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:57:32 by odooms            #+#    #+#             */
/*   Updated: 2019/09/16 15:15:02 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	swap_A(struct s_list *A)
{
//	struct s_list *A = NULL;
	int temp_1;
	int temp_2;
	temp_1 = remove_top(&A);
	temp_2 = remove_top(&A);
	prepend(&A, temp_1);
	prepend(&A, temp_2);
	write(1, "sa\n", 3);
}*/

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
	prepend(&B, 8);
	prepend(&B, 7);
	prepend(&B, 9);
	swap_A(A);
	makelist(B, A);
	return (0);
}
