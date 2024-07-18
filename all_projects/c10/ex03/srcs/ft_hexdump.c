/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:25:54 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/18 00:57:54 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include "ft.h"

void	ft_hexdump(const char *filename)
{
	int		fd;
	int		size;
	char	buff[MAX_BUFFER_SIZE];

	fd = open_file(filename);
	size = read(fd, buff, MAX_BUFFER_SIZE);
	render(buff, size);
	return ;
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_hexdump(av[1]);
	return (0);
}
