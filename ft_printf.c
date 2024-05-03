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
#include <stdio.h>

static int	ft_check(va_list args, const char *format, int len_args, int j)
{	
	len_args = 0;
	if (*format == 'c')
		len_args += ft_putchar(va_arg(args,int), j);
	else if (*format == 'd' || *format == 'i')
		len_args += ft_putnbr(va_arg(args,int), j);
	else if (*format == 's')
		len_args += ft_putstr(va_arg(args, char*));
	else if (*format == '%')
		len_args += ft_putchar(va_arg(args,int), j);
	else if (*format == 'u')
		len_args += ft_putnbr(va_arg(args, unsigned int), j);
	else if (*format == 'p')
	{	
		len_args += ft_putstr("0x10");
		len_args += ft_putnbr_hex(va_arg(args, int), j,  "0123456789abcdef");
	}
	else if (*format == 'x')
			len_args += ft_putnbr_hex(va_arg(args, int), j,  "0123456789abcdef");
	else if (*format == 'X')
			len_args += ft_putnbr_hex(va_arg(args, int), j,  "0123456789ABCDEF");
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
			ft_putchar(format[i], j);
		i++;
	}
	va_end(args);
	return (len_args);
	
}

int	main(void)
{
	char	*str;

	str = "12344564jdfkhdkfjhddgkdvkhxkvkhxh";
	ft_printf("printf gabi%p\n", "*str");
	printf("printf le vrai %p\n", "*str");
	return (0);
}
