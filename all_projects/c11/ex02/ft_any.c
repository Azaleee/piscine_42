/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:51:12 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 14:53:30 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	if (count == 0)
		return (0);
	else
		return (1);
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
	char	*tab[] = {"salut", "salit", "ddd", NULL};
	printf("%d", ft_any(tab, &if_z));
}*/
