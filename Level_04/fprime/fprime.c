/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:06:39 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/06/01 19:14:39 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int n)
{
	int	i;

	i = 2;
	if (n == 1)
		printf("1");
	else
	{
		while (n >= i)
		{
			while (n % i == 0 && is_prime(i) == 1)
			{
				if (n / i == 1)
				{
					printf("%d", i);
					break ;
				}
				printf("%d*", i);
				n = n / i;
			}
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		fprime(n);
		printf("\n");
	}
	else
		printf("\n");
	return (0);
}
