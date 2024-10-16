/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:58:33 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 17:39:40 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 15;
	b = 2;
	pa = &a;
	pb = &b;
	printf("a = %d, b = %d\n", *pa, *pb);
	ft_ultimate_div_mod(pa, pb);
	printf("a = %d, b = %d", *pa, *pb);
}*/
