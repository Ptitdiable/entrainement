#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	var_inter;

	var_inter = *a;
	*a = *b;
	*b = var_inter;
}

void	ft_je_trie_lolilol(int *tab, int size)
{
	int	i;
	int	max;
	int	pos;

	i = 0;
	max = tab[0];
	pos = 0;
	while (i < size)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			pos = i;
		}
		i++;
	}
	ft_swap(tab + pos, tab + size - 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_je_trie_lolilol(tab, size - i);
		i++;
	}
}
