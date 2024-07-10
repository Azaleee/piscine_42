/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:34:00 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/10 18:30:35 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size_tab;
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	i = 0;
	size_tab = max - min;
	tab = malloc(size_tab * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (size_tab > 0)
	{
		tab[i] = min;
		size_tab--;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(-1, 45);
	while (i < 46)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
