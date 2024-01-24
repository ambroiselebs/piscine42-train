#include "lib/ft_strlen.h"

char *ft_strcpy(char *dest, char *src)
{
    for (int i = 0; i < ft_strlen(src); i++)
        dest[i] = src[i];

    return (dest);
}