/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:50:39 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/11 20:12:38 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	base_len

	base_len = ft_strlen(base);
	if (*base == '\0' || base_len == 1)
		return (0);
	j = 0;
	i = 0;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == b)
		}
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;

	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		
	}
}
