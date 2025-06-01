unsigned int ft_strlen(char *str)
{
	unsigned int n;
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return n;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

	unsigned int i;
	i = 0;
	unsigned int dest_len;
	unsigned int src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	
	return (dest_len + src_len);
}
