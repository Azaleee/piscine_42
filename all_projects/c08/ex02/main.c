#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		printf("You only need one argument");
	else
	{
		int	x = atoi(av[1]);
		printf("%d", ABS(x));
		return 0;
	}
}
