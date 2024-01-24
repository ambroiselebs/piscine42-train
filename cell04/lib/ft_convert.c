#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (!(str[i] == '\0'))
		i++;

	return (i);
}
void ft_reversestr(char *str, int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
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

    return (res);
}

int ft_binary(int nbr)
{
	char bin[33];
	int i = 0;

	// Handle - numbers
	if (nbr < 0)
	{
		bin[i++] = '-';
		nbr = -nbr;
	}

	// Converting
	while (nbr > 0)
	{
		bin[i++] = (nbr % 2) + '0';
		nbr = nbr / 2;
	}
	bin[i] = '\0';

	// Reversing char*
	ft_reversestr(bin + (bin[0] == '-'), ft_strlen(bin + (bin[0] == '-')));

	// Converting char into int
	int f = ft_atoi(bin);

    return f;

}



int main(void)
{
	int num = -42;

	ft_binary(num);
}
