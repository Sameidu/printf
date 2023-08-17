/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeixoei <smeixoei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:57:18 by smeixoei          #+#    #+#             */
/*   Updated: 2023/08/17 11:40:10 by smeixoei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenght(va_list args, const char *input, int len)
{
	int	check;
	int	i;

	i = 0;
	check = 0;
	while (input[i])
	{
		if (input[i] == '%' && !input[i + 1])
			return (-1);
		if (input[i] == '%')
		{
			check = ft_format(args, input[++i]);
			if (check < 0)
				return (-1);
			len += check;
		}
		else
		{
			if (ft_putchar(input[i]) < 0)
				return (-1);
			len++;
		}
		i++;
	}
	return (len);
}

int	ft_printf(char const *input, ...)
{
	va_list	args;
	int		chars;

	chars = 0;
	if (!input)
		return (0);
	va_start(args, input);
	chars = ft_lenght(args, input, chars);
	va_end(args);
	return (chars);
}
