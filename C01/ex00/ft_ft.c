#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	nbr;
	int	*ptr;

	nbr = 12;
	ptr = &nbr;
	ft_ft(ptr);
	printf("%d", nbr);
}
