#include "ft_printf.h"

int	ft_putnbr_addr(unsigned long n, char *base, int j)
{
	if (n < 0)
		n = -n;
	if (n >= 16)
	{
		j = ft_putnbr_addr(n / 16, base, j);
		j = ft_putnbr_addr(n % 16, base, j);
	}
	else
		j += ft_putchar(base[n]);
	return (j);
}
