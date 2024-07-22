/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:09:18 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 18:56:14 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "do_op.h"

int	main(int ac, char **av)
{
	int	operator;

	if (ac != 4)
	{
		ft_strprint("Invalid number of arguments.\n");
		return (0);
	}
	else
	{
		operator = check_operator(av[2][0]);
		if (operator != -1)
			printf("%d", operator);
		return (0);
	}
}
