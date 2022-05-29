#include<stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;

	i = a;
	if (a == 0 || b == 0)
		return (0);
	while (i >= a)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
}
