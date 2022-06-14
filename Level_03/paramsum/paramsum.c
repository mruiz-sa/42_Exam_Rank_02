void	putnbr(int i)
{
	if (i > 9)
		putnbr(i / 10);
	i = i % 10 + '0';
	write(1, &i, 1);
}

int main(int ac, char **av)
{
	(void)av;
	putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
