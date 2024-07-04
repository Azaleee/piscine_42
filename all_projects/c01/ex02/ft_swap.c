/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:41:38 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/04 17:24:09 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 45;
	b = 78;
	pa = &a;
	pb = &b;
	printf("%d, %d\n", *pa, *pb);
	ft_swap(pa, pb);
	printf("%d, %d", *pa, *pb);

}*/
