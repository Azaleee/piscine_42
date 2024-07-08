/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:05:28 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/07 14:41:01 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*str == '\0' || *to_find == '\0')
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "@@ -1,4 +1,4 @@$";
	char	to_find[] = "4 ";
	
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
