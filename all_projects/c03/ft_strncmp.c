#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while (*s1 && (*s1 == *s2) && n)
    {
        s1++;
        s2++;
        n--;
    }

    return (n == 0) ? 0 : *s1 - *s2;
    //condition ? valeur_si_vrai : valeur_si_faux;
}

int main()
{
    char *s1 = "hollo";
    char *s2 = "hollo";
    printf("%d", ft_strncmp(s1, s2, 3));
    return 0;
}