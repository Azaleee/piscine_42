#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	num;

	if (str_base < 2 || str_base > 16) // Verif si la base donné est valide
		return (0);
	if (*str == '-') // gestion du signe
	{	
		sign = -1;
		str++;
	}
	result = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			num = *str - '0'; // renvoie le chiffre
		else if (*str >= 'a' && *str <= 'f')
		{
			num = 10 + (*str - 'a');
			printf("valeur de num : 10 + (%c - 'a') = %d\n", *str, num);
		}
		else if (*str >= 'A' && *str <= 'F')
			num = 10 + (*str - 'A');
		else
			break;
		if (num >= str_base)
			break;
		printf("%d * %d + %d", result, str_base, num);
		result = result * str_base + num;
		printf(" = %d\n\n", result);
		str++;
	}
	return (result * sign);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi_base(av[1], atoi(av[2])));
}
