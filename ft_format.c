#include "ft_printf.h"

int	ft_format(int c, va_list args)
{
	int	lenght;

	lenght = 0;
	if (c == 'c')
		lenght = ft_putchar(va_arg(args, int));
	else if (c == 's')
		lenght = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		lenght = ft_putp(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		lenght = ft_putnb(va_arg(args, int));
	else if (c == 'u')
		lenght = ft_putnb(var_arg(args, unsigned int));
	else if (c == x || c == X)
		lenght == ft_puthex(va_arg(args, unsigned int));
	else if (c == '%')
		length = ft_putchar('%');
	return (length);
}
