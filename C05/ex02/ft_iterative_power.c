int ft_iterative_power(int nb, int power)
{
        if (power < 0)
        {
                return 0;
        }
	else if (nb == 0 && power == 0)
	{
		return 1;
	}
	else
	{
		int i;
		i = 1;
		int result;
		result = 1;

		while (i <= power)
		{
			result = result * nb;
			i++;
		}
		return result;
	}
}
