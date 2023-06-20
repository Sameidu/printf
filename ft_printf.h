#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_format(int c, va_list args);
int ft_digits(long nb);
int ft_putnb(long nb);
int ft_puthex(size_t nb, char c);
int ft_putp(void *ptr);
int	ft_lenght(va_list args, const char *format, int len);
int	ft_printf(char const *format, ...);

#endif
