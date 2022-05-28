
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = ft_strlen(av[1]) - 1;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while ((av[1][i] != ' ' && av[1][i] != '\t') && i >= 0)
			i--;
		i += 1;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
