
#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[1][i] != av[2][c] && av[2][c] != '\0')
				c++;
			if (av[2][c] == '\0')
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
			c++;
		}
		write(1, av[1], i);
	}
	write(1, "\n", 1);
}
