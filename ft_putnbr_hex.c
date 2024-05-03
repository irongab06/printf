/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:15:59 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/02 14:50:56 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long long n, int j, char *base)
{	
	
	if (n < 0)
	{
		j += ft_putchar('-');
		n = -n;
	}
	if (n >= 16)
	{	
		j = ft_putnbr_hex(n / 16, j, base);
		j = ft_putnbr_hex(n % 16, j, base);
	}	
	else
		j += ft_putchar(base[n]);
	return (j);
}
