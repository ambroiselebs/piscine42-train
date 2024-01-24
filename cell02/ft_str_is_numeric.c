#include "lib/ft_strlen.h"

int ft_str_is_numeric(char *str)
{
    int lenstr = ft_strlen(str);

    for (int i = 0; i < lenstr; i++)
    {
        // Str contains numbers
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }

    return (1);
}