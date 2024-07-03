/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:46:37 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/03 17:08:12 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_result(char f, char s, char t)
{
	write(1, &f, 1);
	write(1, &s, 1);
	write(1, &t, 1);
	if (!(f == '7'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	s = '1';
	t = '2';
	while (f <= '7')
	{
		while (s <= '8')
		{
			while (t <= '9')
			{
				print_result(f, s, t);
				t++;
			}
			s++;
			t = s + 1;
		}
		s = f + 1;
		f++;
	}
}
