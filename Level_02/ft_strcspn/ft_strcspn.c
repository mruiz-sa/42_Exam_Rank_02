/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:20:45 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/26 18:53:46 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		n = 0;
		while (reject[n] != '\0')
		{
			if (s[i] == reject[n])
				return (i);
			n++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;
	return (i);
}
