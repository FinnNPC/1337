#include <unistd.h>

void ft_putstr(char *str)
{

    int l;
    l = 0;

    while (str[l] != '\0')
    {
        write(1, &str[l], 1);

        l++;
    }
    
}
