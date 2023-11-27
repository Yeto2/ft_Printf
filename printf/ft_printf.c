/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:11:31 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/24 19:11:35 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_fsp(char format, int *count, va_list args)
{
	if (format == '%')
		ft_putchar('%', count);
	else if (format == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), count);
	else if (format == 'p')
		ft_put_adrs(va_arg(args, unsigned long long), count);
	else if (format == 'x')
		ft_put_hex(va_arg(args, unsigned int), 'x', count);
	else if (format == 'X')
		ft_put_hex(va_arg(args, unsigned int), 'X', count);
	else
		ft_putchar(format, count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			check_fsp(format[i], &count, args);
		}
		else if (format[i] != '%')
			ft_putchar(format[i], &count);
		i++;
	}
	return (count);
}
