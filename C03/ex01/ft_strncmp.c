#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

int	main()
{
	char *s1 = "Coucou les gens!";
	char *s2 = "Coucou tout le monde!";
	printf("%d\n", ft_strncmp(s1, s2, 6));
}
