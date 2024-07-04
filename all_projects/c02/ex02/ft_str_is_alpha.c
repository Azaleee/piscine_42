/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:46:17 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 21:13:42 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "asldkjad";
	char	str2[] = "djdjjd7d";
	char	str3[] = "";

	printf("%d", ft_str_is_alpha(str));
	printf("%d", ft_str_is_alpha(str2));
	printf("%d", ft_str_is_alpha(str3));

	return (0);
}*/
