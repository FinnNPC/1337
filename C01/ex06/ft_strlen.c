int ft_strlen(char *str)
{
    int l;
    l = 0;
    while (str[l] != '\0')
    {
        l++;   
    }
    return l;
}