/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:19:38 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/09 18:38:50 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);
	}
}

int	main(int ac, char **av)
{
	if (ac > 0)
	{
		ft_putstr(av[0]);
		write(1, "\n", 1);
	}
	return (0);
}
