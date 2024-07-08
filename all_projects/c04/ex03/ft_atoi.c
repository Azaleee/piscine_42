/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:57:45 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/07 21:11:04 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned int	sign;
	int				number;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str++ - '0');
	}
	return (number * sign);
}

int main()
{
    printf("%d\n", ft_atoi("  -----+67676"));
}
