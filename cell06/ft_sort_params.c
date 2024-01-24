#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (!(str[i] == '\0'))
		i++;

	return (i);
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

void ft_sort_args(int agrs_number, char **args)
{


    for (int i = 1; i < agrs_number; i++)
    {
        for (int w = 0; w < ft_strlen(args[i]); w++)
        {
            
        }
    }
}

int main(int argc, char *argv[])
{
    ft_sort_args(argc, argv);
}
