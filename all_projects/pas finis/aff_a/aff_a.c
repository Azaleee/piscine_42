#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1, "a", 1);
	} 
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
