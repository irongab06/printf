/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:11:29 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/29 15:12:13 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n, int j)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		j++;
		return (j);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', j++);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, j);
		ft_putnbr_fd(n % 10, j++);
	}
	else
		ft_putchar_fd(n + '0', j);
	return (j);
}
