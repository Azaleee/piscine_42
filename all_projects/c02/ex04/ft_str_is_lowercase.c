/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:24:56 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 21:27:44 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "abcdef";
	char	str2[] = "abcdeF";
	char	str3[] = "";

	printf("%d", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));

	return (0);
}*/
