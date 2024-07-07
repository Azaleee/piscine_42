#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    unsigned int sign;
    int number;
    sign = 1;

    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;

    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    number = 0;

    while (*str >= '0' && *str <= '9')
    {
        number = number * 10 + (*str++ - '0');
    }

    return number * sign;
}

/*
int main()
{
    printf("%d\n", ft_atoi("  -----+67676"));
}
*/