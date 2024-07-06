#include <stdio.h>
#include <string.h>
/*unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < (size - 1) && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;

	if (size == 0)
		return (0);
	k = 0;
	while (k < size - 1 && *src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
		++k;
	}
	while (*src != '\0')
	{
		++k;
		++src;
	}
	*dest = '\0';
	return (k);
}
/*
int main()
{
    char dest[6] = "";
    char source[] = "Hellollll";

    printf("%u", ft_strlcpy(dest, source, 5));
    printf("%lu", strlcpy(dest, source, 5));
}*/