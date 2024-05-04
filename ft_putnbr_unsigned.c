#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int j)
{
	if (n < 0)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	if(n > 9)
	{
		j = ft_putnbr_unsigned(n / 10, j);
		j = ft_putnbr_unsigned(n % 10, j);
	}
	else
		j += ft_putchar(n + '0');
	return (j);
}
