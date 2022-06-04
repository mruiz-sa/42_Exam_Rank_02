void	sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int	tmp;
	int	swap;

	swap = 1;
	while (swap == 1)
	{
		i = 0;
		swap = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swap = 1;
			}
			i++;
		}
	}
}
