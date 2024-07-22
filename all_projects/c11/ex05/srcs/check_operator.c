/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_operator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:12:11 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 18:37:29 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "do_op.h"

int	check_operator(char operator)
{
	if (operator == '+')
		return (SUM);
	else if (operator == '-')
		return (SOUS);
	else if (operator == '/')
		return (DIV);
	else if (operator == '*')
		return (MUL);
	else if (operator == '%')
		return (MOD);
	else
		return (-1);
}
