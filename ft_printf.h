/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:45:56 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/27 12:42:13 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_puthex(unsigned int nbr, char c);
int	ft_format(const char str, va_list ptr);
int	ft_printf(const char *format, ...);
int	ft_hexpointer(unsigned long nbr);
int	ft_putnbrposi(unsigned int nbr);

int	ft_hexlong(unsigned long nbr);

#endif