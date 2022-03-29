/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:33:55 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/03/24 01:26:27 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_print(unsigned long num, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num < 16)
		*len += write(1, &hex[num], 1);
	else
	{
		ft_print(num / 16, len);
		ft_print(num % 16, len);
	}
}

void	ft_addr(void *p, int *len)
{
	unsigned long	ptr;

	*len += write(1, "0x", 2);
	if (p == NULL)
	{
		ft_putstr("0", len);
		return ;
	}
	ptr = (unsigned long)p;
	if (!ptr)
		return ;
	ft_print(ptr, len);
}
