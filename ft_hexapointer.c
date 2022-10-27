/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexapointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:17:16 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/27 00:51:04 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexpointer(unsigned long nbr)
{
	int	len;

	len = 0;
	write(1, "0x", 2);
	len += ft_hexlong(nbr);
	return (len + 2);
}
