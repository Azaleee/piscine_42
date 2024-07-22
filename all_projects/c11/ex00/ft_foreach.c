/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:15:56 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 11:40:32 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_foreach(int *tab, int lenght, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
void	put_nbr(int nb)
{
	printf("%d ", nb);
}

int	main(void)
{
	int	test[] = {14, 45, 2, 1};
	ft_foreach(test, 4, &put_nbr);
}*/
