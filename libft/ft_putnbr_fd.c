#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int nbr;

    nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
        if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			nbr = 147483648;
		}
        else
            nbr = (nbr * -1);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}