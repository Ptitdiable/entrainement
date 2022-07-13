#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_onputchartout(int nbr, int bornemax)
{
	int	i;

	i = 0;
	while (i < bornemax)
	{
		bornemax = bornemax / 10;
		ft_putchar((nbr / bornemax) % 10 + 48);
		i++;
	}
}

int	ft_check_croissant(int nbr, int n, int bornemax)
{
	int	i;

	i = 0;
	bornemax = bornemax / 10;
	while (i < n - 1)
	{
		if ((nbr / bornemax) % 10 >= (nbr / (bornemax / 10) % 10))
		{
			return (0);
		}
		bornemax = bornemax / 10;
		i++;
	}
	return (1);
}

int	ft_valmax(int n, int bornemax)
{
	int	i;
	int	j;
	int	valmax;

	i = 1;
	j = 10;
	valmax = bornemax - 1;
	while (i < n)
	{
		valmax = valmax - i * j;
		i++;
		j = j * 10;
	}
	return (valmax);
}

void	ft_print_combn(int n)
{
	int	i;
	int	bornemax;
	int	valmax;

	i = 0;
	bornemax = 1;
	while (i < n)
	{
		bornemax = 10 * bornemax;
		i++;
	}
	i = 0;
	valmax = ft_valmax(n, bornemax);
	while (i <= valmax)
	{
		if (ft_check_croissant(i, n, bornemax) == 1)
		{
			ft_onputchartout(i, bornemax);
			if (i < valmax)
				write(1, ", ", 2);
		}
		i++;
	}
}

int	main()
{
	ft_print_combn(5);
}
