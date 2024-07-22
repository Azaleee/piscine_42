/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:16:23 by mosmont           #+#    #+#             */
/*   Updated: 2024/07/22 20:11:12 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>
# include <stdio.h>

# define SUM 1
# define SOUS 2
# define DIV 3
# define MUL 4
# define MOD 5

int		check_operator(char operator);
void	ft_strprint(char *s);

int	sum(int a, int b)
int	sous(int a, int b)
int	div(int a, int b)
int	mul(int a, int b)
int	mod(int a, int b)

#endif
