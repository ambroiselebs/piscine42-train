#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }

    char *str = argv[1];
	char temp;
	int i = 0;

    while (str[i])
    {
		// Check upper
		if (str[i] >= 'a' && str[i] <= 'z')
			temp = str[i]-=32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			temp = str[i]+=32;
		else
			temp = str[i];

		ft_putchar(temp);
		i++;
    }

    ft_putchar('\n');

    return 0;
}

