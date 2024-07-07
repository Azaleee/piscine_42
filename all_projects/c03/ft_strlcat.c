#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(char *src)
{
    unsigned int i;
    while (src[i] != '\0')
    {
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

    if (size <= dest_len)
    {
        return size + src_len;
    }

    i = 0;
    while (src[i] != '\0' && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return dest_len + src_len;
}

int main()
{
    char dest[10] = "foob";
    char src[] = "salut je si";
    printf("%s", dest);
    printf("\n");
    printf("%d", ft_strlcat(dest, src, 100));
    // printf("%lu", strlcat(dest, src, 100));
    printf("\n");
    printf("%s", dest);
    return 0;
}

/*
    Copie concaténent les chaînes
    Ajoute la chaîne src terminée par NUL à la fin de dst.
        Maximul taille - strlen(dst) - 1
        NUL à la fin

    Return :
        Longueur totale de la chaîne qu'il a essayé de créer
        Longueur initiale de dst + la longueur de src



    Verifier la taille des deux chaînes de char
    Calculer l'espace disponible

*/