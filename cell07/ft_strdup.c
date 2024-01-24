#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (!(str[i] == '\0'))
		i++;

	return (i);
}

char *ft_strdup(char *src)
{
    char *new = (char*)malloc(ft_strlen(src));

    for (int i = 0; i < ft_strlen(src); i++)
        new[i] = src[i];
    new[ft_strlen(src)] = '\0';

    return (new);
}
