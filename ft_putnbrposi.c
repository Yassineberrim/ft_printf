/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrposi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:48:37 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/27 12:45:09 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrposi(unsigned int nbr)
{
	long	nb;
	long	len;

	nb = nbr;
	len = 0;
	if (nb >= 10)
	{
		len += ft_putnbrposi(nb / 10);
		len += ft_putnbrposi(nb % 10);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}
