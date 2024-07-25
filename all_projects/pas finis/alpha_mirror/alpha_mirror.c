#include <unistd.h>

void	alpha_mirror(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 97 + ('z' - s[i]);
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = 65 + ('Z' - s[i]);
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		alpha_mirror(av[1]);
		write(1, "\n", 1);
	}
}
