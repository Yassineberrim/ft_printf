/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:05:51 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/27 12:43:45 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	int		b;
	va_list	ptr;

	i = 0;
	b = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			b += ft_format(format[i + 1], ptr);
			i++;
		}
		else
			b += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (b);
}
