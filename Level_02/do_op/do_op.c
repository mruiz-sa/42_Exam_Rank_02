/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:58:11 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/24 16:30:29 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	do_op(char *nb1, char *op, char *nb2)
{
	int	n1;
	int	n2;
	int	r;

	n1 = atoi(nb1);
	n2 = atoi(nb2);
	r = 0;
	if (op[0] == '+')
		r = n1 + n2;
	else if (op[0] == '-')
		r = n1 - n2;
	else if (op[0] == '*')
		r = n1 * n2;
	else if (op[0] == '/')
		r = n1 / n2;
	else if (op[0] == '%')
		r = n1 % n2;
	printf("%d\n", r);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	else
		printf("\n");
	return (0);
}
