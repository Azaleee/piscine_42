/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:33:20 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 21:33:22 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "sa78784#$";
	char	str2[] = "\nddd";
	char	str3[] = "";

	printf("%d", ft_str_is_printable(str));
	printf("%d", ft_str_is_printable(str2));
	printf("%d", ft_str_is_printable(str3));

	return (0);
}*/