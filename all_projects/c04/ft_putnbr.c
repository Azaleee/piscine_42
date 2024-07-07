#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == 0)
    {
        ft_putchar('0');
        return;
    }

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb / 10 != 0)
    {
        printf("%d", nb);
        ft_putnbr(nb / 10);
    }

    ft_putchar('0' + nb % 10);
}

int main()
{
    int nb = 1239;
    ft_putnbr(nb);
    return 0;
}