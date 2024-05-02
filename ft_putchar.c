/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:08:25 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/02 15:13:25 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{	
	if (c == '%')
		write(1, "%", 1);
	else	
		write(1, &c, 1);
	return (1);
}

int	main(void)
{
	ft_putchar('c');
	ft_putchar('\n');
	return (0);
}
