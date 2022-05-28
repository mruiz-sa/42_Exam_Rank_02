
int	is_power_of_2(unsigned int n)
{
	unsigned long	i;

	i = 1;
	while (i < 4294967295)
	{
		if (i == n)
			return (1);
		i = i * 2;
	}
	return (0);
}
