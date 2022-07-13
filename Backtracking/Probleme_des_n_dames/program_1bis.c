#include <conio.h>
#include <stdio.h>

int posDames[10]={0};
int solution = 0;

int abs(int n)
{
	return n<0 ? -n : n;
}

void	recursive(int nDames)
{
	if (nDames == 10)
	{
		for(int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
				if (j == posDames[i]) printf("1 ");
				else printf("0 ");
			printf("\n");
		}
		printf("\n\n");
		++solution;
	}
	for(int i = 0; i < 10; ++i)
	{
	for (int j = 0; j < nDames; ++j)
	if(posDames[j] == i || ( abs(posDames[j] - i) == abs(j - nDames)))
	goto next;
	posDames[nDames] = i;
	recursive (nDames + 1);
	next: continue;
	}
	return;
}

int main(int argc, char *argv[])
{
	recursive(0);
	printf("\nNombre de solutions : %d\n", solution);
	_getch();
	return 0;
}
