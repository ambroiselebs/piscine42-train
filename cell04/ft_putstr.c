#include <unistd.h> 

int ft_strlen(char *str)
{
	int i = 0;

	while (!(str[i] == '\0'))
		i++;

	return (i);
}

void ft_putstr(char *str)
{
	int len = ft_strlen(str);

	for (int i = 0; i < len; i++)
		write(1, &str[i], 1);
}
