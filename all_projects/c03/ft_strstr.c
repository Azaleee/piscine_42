#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *tofind)
{
    unsigned int i;
    unsigned int j;

    if (*tofind == '\0')
        return str;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (tofind[j] != '\0')
        {
            if (str[i + j] != tofind[j])
            {
                break;
            }
            j++;
        }

        if (tofind[j] == '\0')
        {
            return &str[i];
        }
        i++;
    }

    return NULL;
}

int main()
{
    char *haystack = "La boucle interne commence la comparaison de needle avec une portion de haystack à partir de l'index i.Explication :Compare chaque caractère de needle avec haystack[i + j].";
    char *needle = "port";

    char *result = ft_strstr(haystack, needle);
    printf("%s", result);
    return 0;
}