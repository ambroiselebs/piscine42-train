#include "lib/ft_strlen.h"

int ft_str_is_uppercase(char *str)
{
    int lenstr = ft_strlen(str);

    for (int i = 0; i < lenstr; i++)
    {
        // Str contains lowercase
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
    }

    return (1);
}