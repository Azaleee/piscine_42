/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:31:34 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/24 00:24:10 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H

# define MAX_BUFFER_SIZE 30000

int		open_file(const char *filename);
void	ft_putchar(char c);
void	bytes_to_hex(unsigned char byte);
void	printable_char(char c);
void	render(char *buff, int size);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *s);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);

#endif
