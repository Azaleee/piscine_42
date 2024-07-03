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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	s = 1;
	while (f < 99)
	{
		if (!(f == s))
		{
			ft_putchar((f / 10) + '0');
			ft_putchar((f % 10) + '0');
			ft_putchar(' ');
			ft_putchar((s / 10) + '0');
			ft_putchar((s % 10) + '0');
			ft_putchar(',');
			ft_putchar(' ');
		}
		s++;
		if (s == 99)
		{
			s = f + 1;
			f++;
		}
	}
}

int main(void)
{
	ft_print_comb2();
}
