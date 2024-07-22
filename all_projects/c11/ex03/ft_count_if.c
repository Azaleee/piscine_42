/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:53:57 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 15:05:14 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count_if(char **tab, int lenght, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < lenght)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*
int	if_z(char *s)
{
	while (*s)
	{
		if (*s == 'z' || *s == 'Z')
			return (1);
		s++;
	}
	return (0);
}

int	main(void)
{
	char *tab[] = {"salut", "saki", "zzz", "saluzt"};
	printf("%d", ft_count_if(tab, 4, &if_z));
}*/
