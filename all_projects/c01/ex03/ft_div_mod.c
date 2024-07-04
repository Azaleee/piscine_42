/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:54:55 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 17:34:35 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;
	int	*pdiv;
	int	*pmod;

	a = 15;
	b = 2;
	mod = 0;
	div = 0;
	pmod = &mod;
	pdiv = &div;
	ft_div_mod(a, b, pdiv, pmod);
	printf("%d / %d = %d\n", a, b, *pdiv);
	printf("%d mod %d = %d", a, b, *pmod);
}*/
