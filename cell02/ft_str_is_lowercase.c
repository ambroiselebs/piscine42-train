#include "lib/ft_strlen.h"

int ft_str_is_lowercase(char *str)
{
    int lenstr = ft_strlen(str);

    for (int i = 0; i < lenstr; i++)
    {
        // Str contains uppercase
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
    }

    return (1);
}