/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:46:36 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/27 12:58:39 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char str, va_list ptr)
{
	int	i;

	i = 0;
	if (str == '%')
		return (ft_putchar('%'));
	else if (str == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (str == 'p')
		return (ft_hexpointer(va_arg(ptr, unsigned long)));
	else if (str == 'd')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (str == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (str == 'u')
		return (ft_putnbrposi(va_arg(ptr, unsigned int)));
	else if (str == 'x')
		return (ft_puthex(va_arg(ptr, unsigned int), 'x'));
	else if (str == 'X')
		return (ft_puthex(va_arg(ptr, unsigned int), 'X'));
	return (0);
}
