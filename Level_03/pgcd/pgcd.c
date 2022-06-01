#include<stdlib.h>
#include<stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	a;
	int	b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a >= b)
			i = b;
		if (b > a)
			i = a;
		while (i > 0)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d", i);
				return (0);
			}
			i--;
		}
	}
	printf("\n");
}

