#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int j;
    int swapped;
    char *temp;

    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        j = 1;
        while (j < argc - 1)
        {
            i = 0;
            while (argv[j][i] == argv[j + 1][i] && argv[j][i] != '\0' && argv[j + 1][i] != '\0')
                i++;

            if (argv[j][i] > argv[j + 1][i])
            {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
                swapped = 1;
            }
            j++;
        }
    }

    j = 1;
    while (j < argc)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }

    return 0;
}

