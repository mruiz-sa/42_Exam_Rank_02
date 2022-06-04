#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	z;

	if (ac > 1)
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		z = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t')
			&& (av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
			{
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
				{
					write(1, &av[1][i], 1);
					i++;
				}
				write(1, " ", 1);
			}
			i++;
		}
		while (av[1][z] && (av[1][z] != ' ' && av[1][z] != '\t'))
		{
			write(1, &av[1][z], 1);
			z++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
