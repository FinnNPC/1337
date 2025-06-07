int ft_iterative_factorial(int nb)
{
	if (nb < 0)
	{	
		return 0;
	}
	else if (nb == 0)
	{
		return 1;
	}
	else
	{
     		int i;
                i = nb;
                int result;
		result = 1;

		while (i != 0)
		{
			result = result * i;
			i--;
		}

		return result;
	}
	
}
