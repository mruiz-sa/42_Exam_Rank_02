#include<unistd.h>

void	ft_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			if ((str[i] >= 'a' && str[i] <= 'z')
				&& (str[i + 1] == ' ' || str[i + 1] == '\t'
					|| str[i + 1] == '\0'))
				str[i] = str[i] - 32;
			else if ((str[i] >= 'A' && str[i] <= 'Z')
				&& (str[i + 1] != ' ' && str[i + 1] != '\t'
					&& str[i + 1] != '\0'))
				str[i] = str[i] + 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < ac)
		{
			ft_capitalizer(av[i]);
			i++;
		}
	}
	return (0);
}
