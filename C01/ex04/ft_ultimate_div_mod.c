#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	var_inter;

	var_inter = *a;
	*a = *a / *b;
	*b = var_inter % *b;
}

int	main()
{
	int	nbr1;
	int	nbr2;
	int	*ptr1;
	int	*ptr2;
	
	nbr1 = 13;
	nbr2 = 5;
	ptr1 = &nbr1;
	ptr2 = &nbr2;
	printf("nbr1 vaut %d et nbr2 vaut %d\n", nbr1, nbr2);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("nbr1 vaut %d et nbr2 vaut %d", nbr1, nbr2);
}
