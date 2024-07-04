/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:29:23 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 21:31:03 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "DJFJFJ";
	char	str2[] = "HFHFHFHp";
	char	str3[] = "";

	printf("%d", ft_str_is_uppercase(str));
	printf("%d", ft_str_is_uppercase(str2));
	printf("%d", ft_str_is_uppercase(str3));

	return (0);
}*/
