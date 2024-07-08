/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:27:17 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/07 13:40:53 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*save;

	save = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (save);
}
/*
int	main(void)
{
	char	dest[] = "Salut";
	char	src[] = " je suis Matias !";

	printf("Dest base: %s\n\n", dest);
	printf("Adresse de dest: %p \nDest final: %s", ft_strcat(dest, src), dest);
	return (0);
}*/
