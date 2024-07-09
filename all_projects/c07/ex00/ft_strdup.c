/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 00:26:57 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/10 01:18:27 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*save;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	save = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (save);
}
/*
int	main(void)
{
	char	src[] = "Salut je suis";
	char	*dest = ft_strdub(src);
	
	printf("Dest adresse : %p \n", dest);
	printf("Dest string : %s", dest);
	free(dest);
	return (0);
}*/
