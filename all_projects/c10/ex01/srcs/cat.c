/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:15:11 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/17 22:48:09 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cat.h"
#include <fcntl.h>
#include <string.h>
#include <libgen.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define MAX_BUFFER_SIZE 30000

void	display_file(const char *dir_name)
{
	int		fd;
	int		size;
	char	buff[MAX_BUFFER_SIZE];

	fd = open(dir_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, strerror(errno), 25);
		return ;
	}
	size = read(fd, buff, MAX_BUFFER_SIZE);
	buff[size] = 0;
	ft_putstr(buff);
	close(fd);
}

void	read_stdin(void)
{
	char	buffer[MAX_BUFFER_SIZE];
	int		size;

	size = 1;
	while (size > 0)
	{
		size = read(STDIN_FILENO, buffer, MAX_BUFFER_SIZE);
		write(STDOUT_FILENO, buffer, size);
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		read_stdin();
		return (0);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			display_file(av[i]);
			i++;
		}
	}
	return (0);
}
