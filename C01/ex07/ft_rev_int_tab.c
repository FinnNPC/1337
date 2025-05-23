void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	e;
	int	swp;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		swp = tab[s];
		tab[s] = tab[e];
		tab[e] = swp;
		s++;
		e--;
	}
}
