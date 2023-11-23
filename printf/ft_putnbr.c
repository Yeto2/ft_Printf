/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:49:20 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/19 23:40:47 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", count);
	else if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
		ft_putnbr(n, count);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0', count);
	}
}
