#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	num;

	result = 0;
	sign = 1;
	if (str_base < 2 || str_base > 16)
		return (0);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			num = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			num = 10 + (*str - 'a');
		else if (*str >= 'A' && *str <= 'F')
			num = 10 + (*str - 'A');
		else
			break ;
		if (num >= str_base)
			break;
		result = result * str_base + num;
		str++;
	}
	return (result * sign);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi_base(av[1], atoi(av[2])));
}
