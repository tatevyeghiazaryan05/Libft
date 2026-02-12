#include <stdlib.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long int m;
	if (fd < 0)
		return ;
	m = n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m = -m;
	}
	if (m >= 10)
	{
		ft_putnbr_fd(m/10,fd);
	}
	ft_putchar_fd((m % 10) + '0',fd);
}
