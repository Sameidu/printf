/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeixoei <smeixoei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:57:07 by smeixoei          #+#    #+#             */
/*   Updated: 2023/06/20 15:57:08 by smeixoei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		i += ft_putstr("(null)");
		return (i);
	}
	while (str[i] != '\0')
	{
		if (ft_putchar(str[i]) < 0)
			return (-1);
		i++;
	}
	return (i);
}
