/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:01:38 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/11 18:30:14 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (*base == '\0' || ft_strlen(base) == 1)
		return (0);
	i = 0;
	j = 1;
	while (i < ft_strlen(base) - 1)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (ft_check_base(base) == 1)
	{		
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr / len_base != 0)
			ft_putnbr_base(nbr / len_base, base);
		write(1, &base[nbr % len_base], 1);
	}
}

int	main(void)
{
	ft_putnbr_base(137, "");
	return (0);
}
