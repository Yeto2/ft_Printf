/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 05:14:32 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/19 23:48:10 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned int nbr, char c, int *count)
{
	if (nbr > 15)
	{
		ft_put_hex(nbr / 16, c, count);
		ft_put_hex(nbr % 16, c, count);
	}
	else
	{
		if (c == 'x')
			ft_putchar(HEXA_L[nbr], count);
		if (c == 'X')
			ft_putchar(HEXA_U[nbr], count);
	}
}
