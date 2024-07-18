/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:49:25 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/18 02:38:13 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	render_addr(int addr)
{
	int	i;

	i = 28;
	while (i >= 0)
	{
		ft_putchar("0123456789abcdef"[(addr >> i) & 0xf]);
		i -= 4;
	}
}

void	render_ascii(char *buff, int size, int i)
{
	int	j;

	j = 0;
	ft_putchar(' ');
	ft_putchar('|');
	while (j < 16 && j + i < size)
	{
		printable_char(buff[i + j]);
		j++;
	}
	while (j < 16)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putchar('|');
}

void	render_hexa(char *buff, int size, int i)
{
	int	j;

	j = 0;
	ft_putchar(' ');
	while (j < 16)
	{
		if (i + j < size)
			bytes_to_hex(buff[i + j]);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if ((j + 1) % 2 == 0 || (j + 1) % 2 == 1)
			ft_putchar(' ');
		if (j == 7)
			ft_putchar(' ');
		j++;
	}
}

void	render(char *buff, int size)
{
	char	*temp;
	int		i;

	i = 0;
	temp = buff;
	while (i < size)
	{
		render_addr(i);
		ft_putchar(' ');
		render_hexa(temp, size, i);
		render_ascii(temp, size, i);
		ft_putchar('\n');
		i += 16;
	}
}
