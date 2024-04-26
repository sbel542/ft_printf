#include "ft_printf.h"
#include <unistd.h>

static int	ft_undigits(unsigned int num)
{
	int	count;

	count = 0;
	if (num == 0)
		count++;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

int	ft_putunint(unsigned int nb)
{
	int	x;

	x = nb;
	if (nb >= 10)
	{
		ft_putunint(nb / 10);
		ft_putunint(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (ft_undigits(x));
}
