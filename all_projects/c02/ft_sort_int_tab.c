#include <stdio.h>

void print_tab(int *tab, int size)
{
    for (int a = 0; a < size; a++)
    {
        printf("%d, ", tab[a]);
    }
    printf("\n");
}

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;
    i = 0;

    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[j] < tab[i])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int tab[4];
    tab[0] = 428;
    tab[1] = 504;
    tab[2] = 103;
    tab[3] = 206;

    print_tab(tab, 4);

    ft_sort_int_tab(tab, 4);

    print_tab(tab, 4);
}