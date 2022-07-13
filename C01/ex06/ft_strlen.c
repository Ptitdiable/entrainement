#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char *str= "Carapuce";
	printf("la chaine de caractere contient %d caracteres", ft_strlen(str));
}
