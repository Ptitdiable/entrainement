#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else 
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int	main()
{
	ft_putnbr(-2147483648);
}
