/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:37:00 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/18 23:32:55 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	int_len(int nbr)
{
	int	result;

	result = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		result++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		result++;
	}
	return (result);
}

void	int_to_string(int nb, char *str, int *i)
{
	if (nb >= 10)
		int_to_string(nb / 10, str, i);
	str[*i] = (nb % 10) + '0';
	(*i)++;
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		i;
	int		len;
	int		temp;

	len = int_len(nbr);
	i = 0;
	result = malloc(len + 1 * sizeof(char));
	if (nbr < 0)
	{
		result[i++] = '-';
		nbr = -nbr;
	}
	int_to_string(nbr, result, &i);
	result[len] = '\0';
	return (result);
}
/*
int	main(void)
{
	printf("result : %s", ft_itoa(-0));
}*/
