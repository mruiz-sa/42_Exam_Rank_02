#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}

void	tab_mult(int n)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		putnbr(i);
		write(1, " x ", 3);
		putnbr(n);
		write(1, " = ", 3);
		putnbr(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		tab_mult(n);
	}
	else
		write(1, "\n", 1);
	return (0);
}
