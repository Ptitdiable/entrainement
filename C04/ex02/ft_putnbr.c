#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int long a;

	a = nb;
	if (nb = -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (a < 0)
		{
			 = -nb;
			ft_putchar('-');
		}
		if (a > 9)
			ft_putnbr(nb % 10);
		ft_putchar(nb + 48);
	}
}

int	main(int argc, char *argv)
{
	ft_putnbr(123);
}
