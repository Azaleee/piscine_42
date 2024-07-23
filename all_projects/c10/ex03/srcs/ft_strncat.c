/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:41:39 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/07 13:46:34 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*save;

	save = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (save);
}
