char *ft_strcapitalize(char *str)
{
	int	i;
	int	index;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	index = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && index == 1)
			str[i] = str[i] - 32;
		else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
			&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
			index = 0;
		index++;
		i++;
	}
	return (str);
}
