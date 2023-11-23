/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:29:25 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/19 23:47:46 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(unsigned long long nbr, int *count)
{
	if (nbr > 15)
	{
		print_hex(nbr / 16, count);
		print_hex(nbr % 16, count);
	}
	else
	{
		ft_putchar(HEXA_L[nbr], count);
	}
}

void	ft_put_adrs(unsigned long long adrs, int *count)
{
	ft_putstr("0x", count);
	print_hex(adrs, count);
}
