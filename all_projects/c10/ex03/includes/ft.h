/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:31:34 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/18 00:54:54 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H

# define MAX_BUFFER_SIZE 30000

int		open_file(const char *filename);
void	ft_putchar(char c);
void	bytes_to_hex(char bytes);
void	printable_char(char c);
void	render(char *buff, int size);

#endif
