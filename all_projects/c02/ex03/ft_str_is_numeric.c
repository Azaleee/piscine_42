/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:16:30 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 21:22:17 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "789897987";
	char	str2[] = "7896-";
	char	str3[] = "";

	printf("%d", ft_str_is_numeric(str));
	printf("%d", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));

	return (0);
}*/
