#include <unistd.h>

int	replace(char *s, char *a, char *b)
{
	int	i;
	
	i = 0;
	while (a[i])
		i++;
	if (i != 1)
		return (0);
	i = 0;
	while (b[i])
		i++;
	if (i != 1)
		return (0);
	while (*s)
	{
		if (*s == *a)
		{
			*s = *b;
			write(1, s, 1);
		}
		else
			write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		write(1, "\n", 1);
	else
	{
		if (replace(av[1], av[2], av[3]) == 0)
			write(1, "\n", 1);
	}
}
