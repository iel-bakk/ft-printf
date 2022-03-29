/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:08:32 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/03/24 01:28:39 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned int num, int *len, int upper)
{
	char	*uhex;
	char	*lhex;

	lhex = "0123456789abcdef";
	uhex = "0123456789ABCDEF";
	if (num < 16)
	{
		if (upper)
			*len += write(1, &uhex[num], 1);
		else
			*len += write(1, &lhex[num], 1);
	}
	else
	{
		ft_hex(num / 16, len, upper);
		ft_hex(num % 16, len, upper);
	}
}
