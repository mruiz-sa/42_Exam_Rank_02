/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:19:39 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/06/01 19:52:49 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	absolute_value(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int	ft_len(int i)
{
	int	len;

	len = 0;
	if (i <= 0)
		len++;
	while (i != 0)
	{
		i = i / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;

	len = ft_len(nbr);
	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	if (nbr < 0)
		str[0] = '-';
	while (len > 0)
	{
		len--;
		str[len] = absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
