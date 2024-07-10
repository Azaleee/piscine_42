/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:01:04 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/10 23:44:13 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

int	ft_strstrlen(int size, char **strs, char *sep)
{
	int	size_sep;
	int	size_total;
	int	i;

	size_sep = ft_strlen(sep);
	size_total = 0;
	size_total += size_sep * (size - 1);
	i = 0;
	while (i < size)
	{
		size_total += ft_strlen(strs[i]);
		i++;
	}
	return (size_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		size_total;
	int		i;

	if (size <= 0)
	{
		final = malloc(1);
		if (final != NULL)
			final[0] = '\0';
		return (final);
	}
	size_total = ft_strstrlen(size, strs, sep);
	final = malloc(size_total + 1);
	if (!final)
		return (NULL);
	i = 0;
	final[0] = '\0';
	while (i < size)
	{
		ft_strcat(final, strs[i]);
		if (i < size - 1)
			ft_strcat(final, sep);
		i++;
	}
	return (final);
}
/*
int	main(void)
{
	char	*strs[] = {
		"Salut",
		"je",
		"suis",
		"Matias",
		"42"
	};
	char	sep[] = " ";
	char	*final = ft_strjoin(5, strs, sep);
	printf("%s", final);
	free(final);
	return (0);
}*/
