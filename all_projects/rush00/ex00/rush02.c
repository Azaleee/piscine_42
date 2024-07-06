/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emadiba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:56:40 by emadiba           #+#    #+#             */
/*   Updated: 2024/07/06 14:16:23 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	render(int length, int width, int x, int y)
{
	if ((length == 1 && width == 1) || (length == 1 && width == x))
		ft_putchar('A');
	else if ((length == y && width == 1) || (length == y && width == x))
		ft_putchar('C');
	else if (width == 1 || width == x || length == 1 || length == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	length;
	int	width;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			render(length, width, x, y);
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
