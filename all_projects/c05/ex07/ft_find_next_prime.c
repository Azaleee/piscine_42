/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:51:48 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/09 02:11:00 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	divider;

	i = 1;
	divider = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			divider++;
		i++;
	}
	if (divider > 2 || divider == 1)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0 || nb == 0)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) != 1)
			nb++;
		return (nb);
	}
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(0));
	return (0);
}*/
