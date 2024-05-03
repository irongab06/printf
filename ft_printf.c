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
//#include <stdio.h>

static int	ft_check(va_list args, const char *format, int len_args, int j)
{	
	len_args = 0;
	if (*format == 'c')
		len_args += ft_putchar(va_arg(args,int));
	else if (*format == 'd' || *format == 'i')
		len_args += ft_putnbr(va_arg(args,unsigned int), 0);
	else if (*format == 's')
		len_args += ft_putstr(va_arg(args, char*));
	else if (*format == '%')
		len_args += ft_putchar(va_arg(args,int));
	else if (*format == 'u')
		len_args += ft_putnbr(va_arg(args, unsigned int), j);
	else if (*format == 'p')
	{	
		len_args += ft_putstr("0x10");
		len_args += ft_putnbr_hex(va_arg(args, unsigned int), j,  "0123456789abcdef");
	}
	else if (*format == 'x')
			len_args += ft_putnbr_hex(va_arg(args, unsigned int), j,  "0123456789abcdef");
	else if (*format == 'X')
			len_args += ft_putnbr_hex(va_arg(args, unsigned int), j,  "0123456789ABCDEF");
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
	len_args = 0;
	while (format[i])
	{	
		j = 0;
		if (format[i] == '%')
		{
			i++;
			len_args += ft_check(args, &format[i], len_args, j);
		}
		else
		{	
			ft_putchar(format[i]);
			len_args++;
		}
		i++;
	}
	va_end(args);
	return (len_args);
	
}
/*
int	main(void)
{
	char	*str;
	int	i;
	int	j;
	int	a;
	int	b;
	
	a = 0;
	b = 0;
	str = "12344564jdfkhdkfjhddgkdvkhxkvkhxh";
	i = ft_printf("gabi1 %i\n", 1234);
	j = printf("gabi2 %i\n", 1234);
	printf("compteur de ft_printf %i\n et de printf %i", i, j);
	a = ft_printf("gabi1 %p\n", "*str");
	b = printf("gabi2 %p\n", "*str");
	printf("compteur de ft_printf %i\n", a);
	printf("compteur de printf %i", b);
	return (0);
}
*/
