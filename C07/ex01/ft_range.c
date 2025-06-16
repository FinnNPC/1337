#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *num;
	int i;

	num = NULL;
	
	if (min >= max)
	{
		return num;
	}
	
	num = (int *)malloc(sizeof(int) * (max - min));
	
	if (!num)
	{
   		return (NULL);
	}

	i = 0;

	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return num;

}
