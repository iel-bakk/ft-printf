/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:51:20 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/03/28 22:38:17 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *string, ...);
void	ft_putstr(char *str, int *len);
void	ft_putchar(char c);
void	ft_addr(void *p, int *len);
void	ft_putnbr(int num, int *len);
void	ft_hex(unsigned int num, int *len, int upper);
void	ft_unsigned(unsigned int num, int *len);

#endif
