#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    char *save;
    save = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return save;
}

int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world ! ";
    printf("%s", ft_strcat(dest, src));
    return 0;
}