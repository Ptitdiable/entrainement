#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

int	main()
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}
