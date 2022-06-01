#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (ac == 3)
	{
		while (av[2][i])
		{
			if (av[2][i] == av[1][n])
				n++;
			i++;
			if (av[1][n] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
		}
		write(1, "0", 2); 
	}
	write(1, "\n", 1);
}