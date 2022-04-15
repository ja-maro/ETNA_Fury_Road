void my_putchar(char c);
void my_putstr(const char *str);

static int        negcheck(int nbr)
{
    int    check;

    check = 0;
    if (nbr == -2147483648)
        return (2);
    if (nbr < 0)
        check = 1;
    return (check);
}

void            my_putnbr(int nbr)
{
    if (negcheck(nbr) == 2)
        my_putstr("-2147483648");
    else
    {
        if (negcheck(nbr) == 1)
        {
            my_putchar('-');
            nbr = -nbr;
        }
        if (nbr >= 10)
        {
            my_putnbr(nbr / 10);
            my_putchar((nbr % 10) + '0');
        }
        else
            my_putchar((nbr % 10) + '0');
    }
}
