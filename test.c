/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:57:32 by odooms            #+#    #+#             */
/*   Updated: 2019/09/20 15:33:17 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
	//	prepend(&B, m);
		argc--;
	}
	makelist(B, A);
	return (0);
}
