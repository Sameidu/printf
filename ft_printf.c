/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeixoei <smeixoei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:57:18 by smeixoei          #+#    #+#             */
/*   Updated: 2023/06/29 14:58:55 by smeixoei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenght(va_list args, const char *format, int len)
{
	int	check;
	int	i;

	i = 0;
	check = 0;
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			break ;
		if (format[i] == '%')
		{
			check = ft_format(format[++i], args);
			if (check < 0)
				return (-1);
			len += check;
		}
		else
		{
			if (ft_putchar(format[i]) < 0)
				return (-1);
			len++;
		}
		i++;
	}
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		chars;

	chars = 0;
	if (!format)
		return (0);
	va_start(args, format);
	chars = ft_lenght(args, format, chars);
	va_end(args);
	return (chars);
}
