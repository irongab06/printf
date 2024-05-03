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

#include "libftprintf.h"

int	ft_putnbr_hex(int n, int j, char *base)
{	
	
	if (n < 0)
	{
		ft_putchar('-', j++);
		n = -n;
	}
	if (n >= 16)
	{	
		ft_putnbr_hex(n / 16, j, base);
		ft_putnbr_hex(n % 16, j, base);
	}	
	else
		ft_putchar(base[n], j++);
	return (j);
}
