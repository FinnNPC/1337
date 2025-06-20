int ft_find_next_prime(int nb)
{
    int i;
    int next;

    if (nb <= 1)
        return 2;

    next = nb;

    while (1)
    {
        i = 2;
        while (i * i <= next)
        {
            if (next % i == 0)
                break;
            i++;
        }
        if (i * i > next)
            return next;
        next++;
    }
}

