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

#include "libft.h"

int	ft_check(va_list args, const char* format)
{
	int len_arg;
	int	j;
	
	j = 0;
	i = 0;
	if (format[i] == 'c')
		len_arg += ft_putchar(va_arg(args,int));
		return (len_arg);
	else if (format[i] == 'd' || format[i] == 'i')
		len_arg += ft_putnbr(va_arg(args,int), int j);
		return (len_arg);
	else if (format[i] == 's')
		len_arg += ft_putstr(va_arg(args, char*));
		return (len_arg);
	else if (format[i] == '%')
		len_arg += ft_putchar(va_arg(args,int));
		return (len_arg);
	else if (format[i] == 'u')
		len_arg += ft_putnbr(va_arg(args, unsigned int));
		return (len_arg);
	
		
}

int	ft_printf(const char* format, ...)
{
	int	i;
	va_list	args;
	int	len_args;
	
	j = 0;
	va_start(args, format);
	i = 0;
	len_args;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len_args += ft_check(va_args, &format[i + 1]);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (len_arg);
	
}
