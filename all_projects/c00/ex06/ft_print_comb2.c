/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:05:20 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/03 18:27:54 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	render(char f, char s)
{
	char buff;

	buff = (f / 10) + '0';
	write(1, &buff, 1);
	buff = (f % 10) + '0';
	write(1, &buff, 1);
	write(1, " ", 1);
	buff = (s / 10) + '0';
	write(1, &buff, 1);
	buff = (s % 10) + '0';
	write(1, &buff, 1);
	if (!(f == 98))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	f;
	char	s;

	f = 0;
	s = 1;
	while (f < 99)
	{
		if (!(f == s))
		{
			render(f, s);
		}
		s++;
		if (s == 100)
		{
			s = f + 1;
			f++;
		}
	}
}