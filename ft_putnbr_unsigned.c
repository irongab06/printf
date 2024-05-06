/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:07:27 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/06 11:40:25 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int j)
{
	if (n > 9)
	{
		j = ft_putnbr_unsigned(n / 10, j);
		j = ft_putnbr_unsigned(n % 10, j);
	}
	else
		j += ft_putchar(n + '0');
	return (j);
}
