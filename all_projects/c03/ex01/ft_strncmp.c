/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:15:14 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/07 13:25:31 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && (*s1 == *s2) && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
/*
int	main(void)
{
	char	s1[] = "Sqlut je suis";
	char	s2[] = "Salut je suis";

	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d", strncmp(s1, s2, 2));
	return (0);
}*/
