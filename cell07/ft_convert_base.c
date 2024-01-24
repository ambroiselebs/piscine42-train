#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (!(str[i] == '\0'))
		i++;

	return (i);
}
int ft_check_base(char *base)
{
    int len = ft_strlen(base);

    if (len == 2)
        return 2
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    // Check base
    int len_from = ft_strlen(base_from);
    int len_to = ft_strlen(base_to);
}