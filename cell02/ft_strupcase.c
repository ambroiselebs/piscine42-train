#include "lib/ft_strlen.h"

char *ft_strupcase(char *str)
{
    int lenstr = ft_strlen(str);

    for (int i = 0; i < lenstr; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }

    return (str);
}