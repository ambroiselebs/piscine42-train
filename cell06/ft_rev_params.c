#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

void ft_print_args(char **args, int args_number)
{
	for (int i = args_number-1; i >= 1; i--)
	{
		ft_putstr(args[i]);
		ft_putchar('\n');
	}
}

int main(int argc, char *argv[])
{
	ft_print_args(argv, argc);
}
