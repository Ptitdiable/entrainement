#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	var_inter;

	var_inter = *a;
	*a = *b;
	*b = var_inter;
}

int main()
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 12;
	b = 42;
	ptr_a = &a;
	ptr_b = &b;
	printf("a vaut %d et b vaut %d\n", a, b);
	ft_swap(ptr_a, ptr_b);
	printf("a vaut %d et b vaut %d\n", a, b);
}
