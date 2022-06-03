#include<unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	z;
	int	first_word;

	i = 0;
	first_word = 1;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\0'))
			i--;
		z = i;
		while (z >= 0 && str[z] != ' ' && str[z] != '\t')
			z--;
		if (first_word == 0)
			write(1, " ", 1);
		write(1, &str[z + 1], i - z);
		first_word = 0;
		i = z;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
}
