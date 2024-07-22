/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:08:42 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 19:11:20 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "do_op.h"

int	sum(int a, int b)
{
	return (a + b);
}

int	sous(int a, int b)
{
	return (a - b);
}

int	div(int a, int b)
{
	return (a / b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	mod(int a, int b)
{
	return (a % b);
}
