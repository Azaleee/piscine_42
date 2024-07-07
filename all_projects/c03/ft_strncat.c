#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *save;
    save = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src && nb > 0)
    {
        *dest++ = *src++;
        nb--;
    }

    *dest = '\0';

    return save;
}

int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world ! ";
    printf("%s", ft_strncat(dest, src, 3));
    return 0;
}