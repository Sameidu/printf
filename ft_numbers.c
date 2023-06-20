#include "ft_printf.h"

int ft_digits(long nb)
{

}

int ft_putnum(long nb)
{
    int len;

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

int ft_putex(size_t nb, char c)
{

}

int ft_putp(void *ptr)
{
    
}