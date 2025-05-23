void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		j++;
	}
}
