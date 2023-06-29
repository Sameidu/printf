/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeixoei <smeixoei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:57:21 by smeixoei          #+#    #+#             */
/*   Updated: 2023/06/29 14:58:57 by smeixoei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_format(int c, va_list args);
int	ft_digits(long nb);
int	ft_putnb(long nb);
int	ft_puthex(size_t nb, char c);
int	ft_putp(void *ptr);
int	ft_lenght(va_list args, const char *format, int len);
int	ft_printf(char const *format, ...);

#endif
