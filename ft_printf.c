#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int	chars;

	if (!format)
		return (0);
	va_start(args, format);
}
