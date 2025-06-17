#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	int len;
	int i;
	int j;
	i = 0;
	len = 0;
	char *final_string;

	if (size == 0)
	{
		final_string = (char *)malloc(1);
		if (final_string)
			final_string[0] = '\0';
		return final_string;
	}

	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}

	int sep_len;
	int s;
	s = 0;
	while (sep[s] != '\0')
	{
		s++;
	}
	sep_len = s;

	final_string = (char *)malloc(sizeof(char) * (len + (sep_len * (size - 1)) + 1));
	if (!final_string)
		return NULL;

	int b;
	int o;
	int y;
	b = 0;
	y = 0;

	while (y < size)
	{
		j = 0;
		o = 0;
		while (strs[y][j] != '\0')
		{
			final_string[b] = strs[y][j];
			j++;
			b++;	
		}

		if (y < size - 1)
		{
			o = 0;
			while (sep[o] != '\0')
			{
				final_string[b] = sep[o];
				o++;
				b++;
			}
		}
		y++;
		
	}
	final_string[b] = '\0';

	return final_string;
}
