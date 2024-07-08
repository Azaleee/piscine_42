/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 00:57:00 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/09 01:26:22 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	divider;

	if (nb < 0)
		return (0);
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
/*
int	main(void)
{
	int	i;

	i = 1;
	while (i < 100)
	{		
		printf("%d : %d\n", i++, ft_is_prime(i));
	}
	return (0);
}*/
