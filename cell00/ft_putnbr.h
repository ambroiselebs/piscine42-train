#include <unistd.h>
#include "ft_putchar.h"

void ft_putnbr(int nb)
{
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar('0'+nb%10);
}