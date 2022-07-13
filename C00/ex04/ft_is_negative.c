#include <unistd.h>

void	ft_is_negative(int	n)
{
	if (n < 0)
		write(1, "N", 1);
	if (n >= 0)
		write(1, "Y", 1);
}

int	main()
{
	ft_is_negative(10);
	ft_is_negative(0);
	ft_is_negative(-5);
}
