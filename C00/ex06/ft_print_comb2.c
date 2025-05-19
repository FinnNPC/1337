#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int fir;
	int sec;

	fir = 0;
	while (fir <= 98)
	{
		sec = fir + 1;
		while (sec <= 99)
		{
			ft_putchar(fir / 10 + '0');
			ft_putchar(fir % 10 + '0');
			ft_putchar(' ');
			ft_putchar(sec / 10 + '0');
			ft_putchar(sec % 10 + '0');
			if (fir != 98 || sec != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			sec++;
		}
		fir++;
	}

}
