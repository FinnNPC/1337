#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
	
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *array; 
		
	array = malloc(sizeof(t_stock_str) * (ac + 1));

	if (!array)
		return NULL;

	i = 0;

	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = malloc(sizeof(char) * (array[i].size + 1));
		if (!array[i].copy)
		{
			return NULL;
		}
		array[i].copy = ft_strcpy(array[i].copy, av[i]);
		i++;
	}
	array[i].str = 0;
	return array;

}
