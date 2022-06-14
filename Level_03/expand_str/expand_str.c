int	checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] != ' ' || av[1][i] != '\t')
			{
				write(1, &av[1][i], 1);
				if (av[1][i + 1] == ' ' || av[1][i + 1] == '\t')
				{
					if (checker(&av[1][i + 1]) == 1)
						write(1, "   ", 3);
				}		
				i++;
			}
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
		}
	}
	write(1, "\n", 1);
}
