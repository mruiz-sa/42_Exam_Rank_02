
#include<stdio.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

void	print_hex(int a)
{
	if (a >= 16)
	{
		print_hex(a / 16);
		print_hex(a % 16);
	}
	else
	{
		if (a <= 9)
		{
			a = a + 48;
			write(1, &a, 1);
		}
		else
		{
			a = a - 10 + 'a';
			write(1, &a, 1);
		}
	}
}

int	main(int ac, char **av)
{
	int	a;

	if (ac == 2)
	{
		a = ft_atoi(av[1]);
		print_hex(a);
	}
	write(1, "\n", 1);
}

