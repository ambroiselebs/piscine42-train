#include "lib/ft_strlen.h"
#include "lib/ft_strupcase.h"
#include "lib/ft_strlowcase.h"
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int len = ft_strlen(str);

    // Lowercase all letters
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    //Uppercase first letter
    str[0] -= 32;

    // Uppercase first letter of each word
    for (int i = 0; i < len; i++)
    {
        if(str[i-1] == ' ' || str[i-1] == '-' || str[i-1] == '+')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
    }
}
