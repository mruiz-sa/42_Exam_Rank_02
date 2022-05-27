/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:33:20 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/26 18:58:26 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;

	i = 0;
}

int	main(void)
{
	printf("%zu\n", strspn("mikel", "jsjsjsmjsjsjijsjsjkjsjsjejsjsjl"));
	printf("%zu", ft_strspn("mikel", "jsjsjsmjsjsjijsjsjkjsjsjejsjsjl"));
}
