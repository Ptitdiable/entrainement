#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;

	i = 0;
	while (i <= 788)
	{
		if (i / 100 < ((i / 10) % 10) && ((i / 10) % 10) < i % 10)
		{
			A
			ft_putchar(i / 100 + 48);
			ft_putchar((i / 10) % 10 + 48);
			ft_putchar(i % 10 + 48);
			write(1, ", ", 2);
		}
		i++;
	}
	write(1, "789", 3);
}

int	main()
{
	ft_print_comb();
}
