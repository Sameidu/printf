#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_format(int c, va_list args);

#endif
