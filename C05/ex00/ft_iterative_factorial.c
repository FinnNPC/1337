int ft_iterative_factorial(int nb)
{
	if (nb < 0)
	{	
		return 0;
	}
	else if (nb == 0 || nb == 1)
	{
		return 1;
	}
	else
	{
     		int i;
                i = 2;
                int result;
		result = 1;

		while (i <= nb)
		{
			result = result * i;
			i++;
		}

		return result;
	}
	
}
