/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:22:50 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/31 12:45:39 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	a;
	int	b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a >= b)
			i = b;
		if (b > a)
			i = a;
		while (i > 0)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d", i);
				return (0);
			}
			i--;
		}
	}
	printf("\n");
}

