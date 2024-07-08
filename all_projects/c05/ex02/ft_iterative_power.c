/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:31:55 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/08 22:55:35 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(-7, 4));
	return (0);
}*/
