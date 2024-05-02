/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:15:59 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/02 12:25:10 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_hex(int n,char *base)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar("-");
		nbr = -nbr;
	}
	if (nbr >= 16)
		ft_putnbr_hex(nbr / 16);
	ft_putchar(base[nbr % 16]);
}
