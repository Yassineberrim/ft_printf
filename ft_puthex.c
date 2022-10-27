/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:30:48 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/27 13:04:27 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, char c)

{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		len += ft_puthex(nbr / 16, c);
		len += ft_puthex(nbr % 16, c);
	}
	else
		len += ft_putchar(base[nbr]);
	return (len);
}
