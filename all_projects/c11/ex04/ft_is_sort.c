/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:07:18 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 15:31:02 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	if_sort(int index1, int index2)
{
	if (index1 < index2)
		return (-1);
	else if (index1 == index2)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int	tab[] = {1, 1, 3, 78};
	printf("%d", ft_is_sort(tab, 4, &if_sort));
	return (0);
}
