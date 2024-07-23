/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:42:28 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/24 01:09:38 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	bytes_to_hex(unsigned char byte)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[byte / 16]);
	ft_putchar(hexa[byte % 16]);
}

void	printable_char(char c)
{
	if (c >= 32 && c <= 126)
		ft_putchar(c);
	else
		ft_putchar('.');
}
