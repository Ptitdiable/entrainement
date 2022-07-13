#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int 	a;
	int 	b;
	int 	*div;
	int	*mod;
	int	c;
	int	d;

	a = 13;
	b = 5;
	div = &c;
	mod = &d;
	c = -1;
	d = -2;
	ft_div_mod(a, b, div, mod);
	printf("c vaut %d et d vaut %d", c, d);
}
