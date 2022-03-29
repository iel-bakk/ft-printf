/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:29:55 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/03/28 22:31:27 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *len)
{
	char		c;
	long long	dada;

	dada = num;
	if (dada < 0)
	{
		*len += write(1, "-", 1);
		dada *= -1;
	}
	if (dada < 10)
	{
		c = dada + 48;
		*len += write(1, &c, 1);
	}
	else
	{
		ft_putnbr(dada / 10, len);
		ft_putnbr(dada % 10, len);
	}
}
