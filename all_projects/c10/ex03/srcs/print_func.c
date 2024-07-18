/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:42:28 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/18 00:45:25 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(0, &c, 1);
}

void	bytes_to_hex(char bytes)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[bytes / 16]);
	ft_putchar(hexa[bytes % 16]);
}

void	printable_char(char c)
{
	if (c >= 32 && c <= 126)
		ft_putchar(c);
	else
		ft_putchar('.');
}
