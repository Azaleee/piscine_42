/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:15:06 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/08 22:31:28 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(-10));
	return (0);
}*/
