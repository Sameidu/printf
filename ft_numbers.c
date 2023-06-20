#include "ft_printf.h"

int	ft_digits(long nb)
{
	int	check;
	int	len;

	len = 0;
	check = 0;
	if (nb >= 10)
	{
		len = ft_digits(nb / 10);
		if (len < 0)
			return (-1);
	}
	check = ft_putchar(nb % 10 + 48);
	if (check < 0)
		return (-1);
	len += check;
	return (len);
}

int	ft_putnb(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len = ft_putchar('-');
		if (len < 0)
			return (-1);
	}
	len += ft_digits(nb);
	return (len);
}

int	ft_puthex(size_t nb, char c)
{
	int		i;
	int		len;
	char	string[17];
	char	*hex;

	hex = "0123456789ABCDEF";
	if (c == 'x')
		hex = "0123456789abcdef";
	i = 0;
	len = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	while (nb != 0)
	{
		string[i++] = hex[nb % 16];
		nb /= 16;
	}
	while (i > 0)
	{
		if (ft_putchar(string[--i]) < 0)
			return (-1);
		else
			len++;
	}
	return (len);
}

int	ft_putp(void *ptr)
{
	int	i;

	i = ft_putstr("0x");
	if (i < 0)
		return (-1);
	i += ft_puthex((size_t)ptr, 'x');
	return (i);
}
