/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:02:44 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/03/28 22:29:37 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		*len += write(1, "(null)", 6);
		return ;
	}
	while (str[i])
	{
		*len += write(1, &str[i], 1);
		i++;
	}
}
