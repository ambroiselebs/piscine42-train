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
void ft_putnbr(int nb) {
    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb >= 10)
        ft_putnbr(nb / 10);

    ft_putchar('0' + nb % 10);
}

int ft_atoi(char *str)
{
    int len = ft_strlen(str);

    // Check sign
    int minus = 0;
    int plus = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == '-')
            minus++;
        else if (str[i] == '+')
            plus++;
    }

    // Loop for numbers
    char nbr[len];
    int nbr_i = 0;

    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= '0' && str[i] <= '9') && str[i] != '-' && str[i] != '+' && str[i] != ' ')
        {
            nbr[nbr_i] = str[i];
            nbr_i++;
        }

        if (ft_strlen(nbr) > 1 && ((str[i + 1] >= 'a' && str[i + 1] <= 'z') || (str[i+1] >= 'A' && str[i+1] <= 'Z')))
			break;
    }
	nbr[nbr_i] = '\0';

	// Convert char* to int
	int res = 0;
	for (int i = 0; nbr[i] != '\0'; i++)
		res = res * 10 + (nbr[i] - '0');

	// Check for -
	int neg;
	neg = -res;

	if (minus > plus)
		res = neg;

	ft_putnbr(res);
    return (res);
}

int main(int argc, char *argv[])
{
	(void)argc;	

	ft_atoi(argv[1]);
}
