#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;
	char *arr;

	arr = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_putchar(arr[(unsigned char)str[i] / 16]);
			ft_putchar(arr[(unsigned char)str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

