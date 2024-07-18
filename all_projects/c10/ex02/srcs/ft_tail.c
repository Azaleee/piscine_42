/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:59:29 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/18 00:23:16 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

#define MAX_BUFFER_SIZE 30000

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_atoi(char *str)
{
	unsigned int	sign;
	int				number;

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
	return (number * sign);
}

void	ft_tail(const char *filename, int bytes)
{
	int		fd;
	int		size;
	char	buff[MAX_BUFFER_SIZE];
	int		i;

	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, strerror(errno), 25);
		write(2, "\n", 1);
		return ;
	}
	size = read(fd, buff, MAX_BUFFER_SIZE) - bytes;
	while (i < bytes)
	{
		write(1, &buff[size + i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	bytes;

	if (ac != 4 || ft_strcmp(av[1], "-c") != 0)
	{
		return (write(2, "usage: -c <bytes> <filename>\n", 29));
	}
	bytes = ft_atoi(av[2]);
	if (bytes <= 0)
		return (write(1, "Invalid number of bytes", 23));
	ft_tail(av[3], bytes);
	return (0);
}
