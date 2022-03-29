/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:49:19 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/03/28 22:27:56 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int num, int *len)
{
	char	c;

	if (num < 10)
	{
	c = num + 48;
		*len += write(1, &c, 1);
	}
	else
	{
		ft_putnbr(num / 10, len);
		ft_putnbr(num % 10, len);
	}
}
