/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:41:36 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/02 15:26:33 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_check(va_list args, const char* format, int len_args, int j)
{
	len_args = 0;
	if (format[i] == 'c')
		len_args += ft_putchar(va_arg(args,int));
	else if (format[i] == 'd' || format[i] == 'i')
		len_args += ft_putnbr(va_arg(args,int), j);
	else if (format[i] == 's')
		len_args += ft_putstr(va_arg(args, char*));
	else if (format[i] == '%')
		len_args += ft_putchar(va_arg(args,int));
	else if (format[i] == 'u')
		len_args += ft_putnbr(va_arg(args, unsigned int), j);
	else if (format[i] == 'p')
	{	
		len_args += ft_putstr("x0");
		len_args += ft_putnbr_hex(va_arg(args, int, j,  "0123456789abcdef"));
	}
	else if (format[i] == 'x' || format[i] == 'X');
	{
		if (format[i] == 'x')
			len_args += ft_putnbr_hex(va_arg(args, int, j,  "0123456789abcdef"));
		else
			len_args += ft_putnbr_hex(va_arg(args, int, j,  "0123456789ABCDEF"));
	}
	return (len_args);		
}

int	ft_printf(const char* format, ...)
{
	va_list	args;
	int	i;
	int	j;
	int	len_args;
	
	i = 0;
	j = 0;
	va_start(args, format);
	len_args;
	while (format[i])
	{	
		j = 0;
		if (format[i] == '%')
		{
			len_args += ft_check(va_args, &format[i + 1], len_args, j);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len_arg);
	
}

int	main(voi)
{
	ft_printf("%s", "1234");
	return (0);
}
