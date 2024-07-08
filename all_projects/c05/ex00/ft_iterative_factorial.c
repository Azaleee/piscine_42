/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:29:22 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/08 22:28:45 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	result = nb;
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
/* 4! = 4 * 3 * 2 * 1 = 24     4 * 3 = 12   12 * 2 = 24  24 * 1 = 24
int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}*/
