#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	i = 0;
	stock_str = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!stock_str)
		return (NULL);
	while (i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = malloc((stock_str[i].size + 1) * sizeof(char));
		stock_str[i].copy = malloc((stock_str[i].size + 1) * sizeof(char));
		if (!stock_str[i].str || !stock_str[i].copy)
			return (NULL);
		ft_strcpy(stock_str[i].str, av[i]);
		ft_strcpy(stock_str[i].copy, av[i]);
		i++;
	}
	stock_str[ac].str = NULL;
	return (stock_str);
}
/*
void	ft_putstr(char *s)
{
	char	*temp;

	temp = s;
	while (*temp)
	{
		write(1, temp, 1);
		temp++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');

}

void	ft_show_tab(struct s_stock_str *par)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (par[size].str != NULL)
		size++;
	while (i < size)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

int	main(void)
{
	int	i;
	char	*strs[] = 
	{
		"Salut",
		"je suis",
		"Matias",
		"je suis",
		"a 42 !!"
	};
	t_stock_str		*test;

	i = 0;
	test = ft_strs_to_tab(5, strs);
	while (i < 6)
	{
		printf("%s : %s : %d\n", test[i].str, test[i].copy, test[i].size);
		i++;
	}
	test = ft_strs_to_tab(5, strs);
	ft_show_tab(test);
	i = 0;
	while (i < 6)
	{
		free(test[i].str);
		free(test[i].copy);
		i++;
	}
	free(test);
	return (0);
}*/
