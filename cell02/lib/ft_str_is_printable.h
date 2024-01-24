#include "lib/ft_strlen.h"

int ft_str_is_printable(char *str)
{
    int lenstr = ft_strlen(str);

    for (int i = 0; i < lenstr; i++)
    {
        // Str contains non-printable characters
        if (str[i] < 32 || str[i] > 126)
            return (0);
    }

    return (1);
}
