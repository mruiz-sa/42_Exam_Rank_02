/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:05:48 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/26 18:30:52 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s1[i])
	{
		while (s2[c])
		{
			if (s1[i] == s2[c])
				return ((char *)&s1[i]);
			c++;
		}
		c = 0;
		i++;
	}
	return (NULL);
}
