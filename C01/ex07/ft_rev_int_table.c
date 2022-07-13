#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	var_inter;

	var_inter = *a;
	*a = *b;
	*b = var_inter;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(tab + i, tab + size - 1 - i);
		i++;
	}
}

int	main()
{
	int	str[4];
	str[0] = 0;
	str[1] = 1;
	str[2] = 2;
	str[3] = 3;
	printf("%d%d%d%d\n", str[0], str[1], str[2], str[3]);
	ft_rev_int_tab(str, 4);
	printf("%d%d%d%d\n", str[0], str[1], str[2], str[3]);
}
