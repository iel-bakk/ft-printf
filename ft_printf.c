/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:04:53 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/03/28 22:25:44 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_check(char *arg, va_list list, int *len)
{
	if (*arg == 'c')
	{
		ft_putchar(va_arg(list, int));
		*len += 1;
	}
	else if (*arg == 's')
		ft_putstr(va_arg(list, char *), len);
	else if (*arg == 'p')
		ft_addr(va_arg(list, void *), len);
	else if (*arg == 'd')
		ft_putnbr(va_arg(list, int), len);
	else if (*arg == 'i')
		ft_putnbr(va_arg(list, int), len);
	else if (*arg == 'u')
		ft_unsigned(va_arg(list, unsigned int), len);
	else if (*arg == 'x')
		ft_hex(va_arg(list, unsigned int), len, 0);
	else if (*arg == 'X')
		ft_hex(va_arg(list, unsigned int), len, 1);
	else if (*arg == '%')
		*len += write(1, "%", 1);
}

int	ft_printf(const char *string, ...)
{
	va_list	list;
	int		len;

	len = 0;
	va_start(list, string);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			ft_check((char *)string, list, &len);
		}
		else
			len += write(1, string, 1);
		string++;
	}
	va_end(list);
	return (len);
}
