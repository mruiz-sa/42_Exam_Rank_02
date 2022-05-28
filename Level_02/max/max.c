
int	max(int *tab, unsigned int len)
{
	int	i;
	int	tmp;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
		i++;
	}
	return (tab[len - 1]);
}
