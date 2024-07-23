/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:25:54 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/24 01:50:18 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include "ft.h"

void	ft_hexdump(int ac, char **filename, int pose_c, int read_size)
{
	int			fd;
	unsigned int	size;
	char	buff[MAX_BUFFER_SIZE];
	char	final[MAX_BUFFER_SIZE];
	int		i;

	i = 1;
	size = 0;
	while (i < ac && size < MAX_BUFFER_SIZE)
	{
		if (i != pose_c)
		{
			fd = open_file(filename[i]);
			read_size = read(fd, buff, MAX_BUFFER_SIZE);
			printf("%d\n", size);
			ft_strncat(final, buff, read_size);
			size += read_size;
			close(fd);
		}
		i++;
	}
	printf("%s\n", final);
	/*
	if (size > MAX_BUFFER_SIZE)
	{
		ft_putstr("The ");
		ft_putstr(filename[i]);
		ft_putstr(" file will not be displayed because it exceeds the maximum buffer size (~30 kb)");
	}
	else
		printf("lol");*/
	render(final, size);
}

int	check_argument(int ac, char **av)
{
	int	pose_c;

	pose_c = 0;
	while (av[pose_c])
	{
		if (ft_strcmp(av[pose_c], "-C") != 0)
			pose_c++;
		else
			break ;
	}
	if (ac == pose_c)
	{
		ft_putstr("Pas de -C");
		return (0);
	}
	return (pose_c);
}

int	main(int ac, char **av)
{
	int	pose_c;

	if (ac == 1)
		printf("dd");
	else 
	{
		pose_c = check_argument(ac, av);
		if (pose_c == 0)
			return (0);
		ft_hexdump(ac, av, pose_c, 0);
	}
	return (0);
}
