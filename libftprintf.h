/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:11:42 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/02 15:10:29 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_putchar(char c, int j);
int	ft_putstr(char *s);
int	ft_putnbr(int n, int j);
int	ft_putnbr_hex(int n, int j, char *base);


#endif
