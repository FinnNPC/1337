char *ft_strcat(char *dest, char *src)
{
	int i;
	i = 0;
	int j; 
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return dest;

}
