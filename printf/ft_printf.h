/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:32:16 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/23 02:16:15 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA_U "0123456789ABCDEF"
# define HEXA_L "0123456789abcdef"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_u(unsigned int n, int *count);
void	ft_put_adrs(unsigned long long adrs, int *count);
void	ft_put_hex(unsigned int nbr, char c, int *count);

#endif
