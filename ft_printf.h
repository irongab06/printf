/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:04:41 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/06 11:16:03 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n, int j);
int	ft_putnbr_hex(unsigned int n, int j, char *base);
int	ft_putnbr_unsigned(unsigned int n, int j);
int	ft_putnbr_addr(unsigned long n, char *base, int j);
int	ft_putnbr_addr1(unsigned long n, char *base_min, int j);

#endif
