/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:15:59 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/06 11:40:02 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, int j, char *base)
{
	if (n >= 16)
	{
		j = ft_putnbr_hex(n / 16, j, base);
		j = ft_putnbr_hex(n % 16, j, base);
	}
	else
		j += ft_putchar(base[n]);
	return (j);
}
