#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *c)
{
	int	result;

	result = 0;
	while (*c)
		result = result * 10 + (*c++ - '0');
	return (result);
}

int	is_prime(int nb)
{
	int	divider;
	int	i;
	
	i = 0;
	divider = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			divider++;
		i++;
	}
	if (divider > 2 || divider == 1)
		return (0);
	else
		return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int	main(int ac, char **av)
{
	int	result;
	int	nbr;
	int	i;

	if (ac != 2)
		return (write(1, "\n", 1));
	else
	{
		nbr = ft_atoi(av[1]);
		result = 0;
		if (nbr <= 0)
			return (write(1, "0\n", 1));
		while (i <= nbr)
		{
			if (is_prime(i) == 1)
				result += i;
			i++;
		}
		ft_putnbr(result);
		ft_putchar('\n');
	}
}
