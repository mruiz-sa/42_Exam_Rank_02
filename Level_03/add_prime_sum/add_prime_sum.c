/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:48:46 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/27 19:26:35 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	return (n);
}

int	main(int ac, char **av)
{
	int	i;
	int	nbr;
	int	n;

	i = 2;
	n = 0;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while (i <= nbr)
		{
			if (ft_is_prime(i) == 1)
				n = n + i;
			i++;
		}
		ft_putnbr(n);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
