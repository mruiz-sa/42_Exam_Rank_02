/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:59:39 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/27 17:09:32 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int	r;

	i = 8;
	r = 0;
	while (i > 0)
	{
		r = (r << 1) | (octet & 1);
		octet = octet / 2;
		i--;
	}
	return (r);
}
