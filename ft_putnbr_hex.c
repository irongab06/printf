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

static void	ft_putchar_bis(char c, int i)
{
	
	write(1, &c, 1);
}

int	ft_putnbr_hex(int n, int j)
{	
	
	if (nbr < 0)
	{
		ft_putchar("-", j++);
		n = -n;
	}
	if (nbr >= 16)
		ft_putnbr_hex(n / 16, j);
		ft_putnbr_bis(n % 16, j++);
	else
		ft_putchar(base[n]);
	return (j);
}
