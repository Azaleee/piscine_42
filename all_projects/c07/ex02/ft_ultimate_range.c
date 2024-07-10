/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:14:29 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/10 21:00:05 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size_tab;
	int	i;
	int	temp_size;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size_tab = max - min;
	temp_size = size_tab;
	tab = malloc(temp_size * sizeof(int));
	if (tab == NULL)
		return (-1);
	while (temp_size > 0)
	{
		tab[i] = min;
		temp_size--;
		i++;
		min++;
	}
	*range = tab;
	return (size_tab);
}
/*
int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	ft_ultimate_range(&tab, 78, 45);
	if (tab == NULL)
	{
		printf("min >= max");
		return (0);
	}
	while (i < 46)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
