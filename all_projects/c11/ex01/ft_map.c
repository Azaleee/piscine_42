/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:25:43 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 11:50:52 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int lenght, int(*f)(int))
{
	int	*tab_result;
	int	i;

	tab_result = malloc(lenght * sizeof(int));
	i = 0;
	while (i < lenght)
	{
		tab_result[i] = f(tab[i]);
		i++;
	}
	return (tab_result);
}
/*
int	add_10(int nbr)
{
	return (nbr + 10);
}

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

void	put_nbr(int nb)
{
	printf("%d ", nb);
}

int	main(void)
{
	int	tab[] = {2, 5, 4, 2};
	int	*tab_result = ft_map(tab, 4, &add_10);
	ft_foreach(tab_result, 4, &put_nbr);
}*/
