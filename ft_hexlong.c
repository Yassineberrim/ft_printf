/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:32:08 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/27 00:53:08 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlong(unsigned long nbr)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		len += ft_hexlong(nbr / 16);
		len += ft_hexlong(nbr % 16);
	}
	else
		len += ft_putchar(base[nbr]);
	return (len);
}
