#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ascii_to_hex(int ascii)
{
    char *hex = "0123456789abcdef";
    if (ascii > 16)
    {
        ft_putchar(hex[ascii / 16]);
        ft_putchar(hex[ascii % 16]);
    }
    else
    {
        ft_putchar('0');
        ft_putchar(hex[ascii]);
    }
}

void ft_putstr_non_printable(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32)
        {
            ft_putchar(92);
            ascii_to_hex(str[i]);
        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }
}

int main()
{
    char *str = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return 0;
}