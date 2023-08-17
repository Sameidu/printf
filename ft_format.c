/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeixoei <smeixoei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:57:10 by smeixoei          #+#    #+#             */
/*   Updated: 2023/08/17 11:39:39 by smeixoei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char c)
{
	int	lenght;

	lenght = 0;
	if (c == 'c')
		lenght = ft_putchar(va_arg(args, int));
	else if (c == 's')
		lenght = ft_putstr(va_arg(args, void *));
	else if (c == 'p')
		lenght = ft_putp(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		lenght = ft_putnb(va_arg(args, int));
	else if (c == 'u')
		lenght = ft_putnb(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		lenght = ft_puthex(va_arg(args, unsigned int), c);
	else if (c == '%')
		lenght = ft_putchar('%');
	return (lenght);
}
