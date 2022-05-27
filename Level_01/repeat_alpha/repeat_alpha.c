/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:20:09 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/26 17:34:46 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 64;
			while (count)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			i++;
			count = 0;
		}
	}
	write(1, "\n", 1);
}
