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
        else
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
int ft_pow(int nbr, int p)
{
    int new = nbr;
    for (int i = 0; i < p-1; i++)
        new = new * nbr;

    return (new);
}

int ft_bindec(char *bin)
{
    ft_reversestr(bin, ft_strlen(bin));
    int final = 0;

    for (int i = 0; i < ft_strlen(bin); i++)
    {
        if (bin[i] == '1')
            final = final + 1 * ft_pow(2, i);
    }

    if (bin[ft_strlen(bin)-1] == '-')
    {
        final = final*-1;
    }

    return final;
}

int ft_hexdec(char *hex)
{
    char base[16] = "0123456789ABCDEF";
    int final = 0;
    int hex_length = ft_strlen(hex);

    for (int i = 0; i < hex_length; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (hex[i] == base[j])
                final = final * 16 + j;
        }
    }

    if (hex[0] == '-')
        final = final * -1;

    return final;
}

int ft_octadec(char *octa)
{
    char base[8] = "poneyvif";
    int final = 0;
    int octa_length = ft_strlen(octa);

    for (int i = 0; i < octa_length; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (octa[i] == base[j])
                final = final * 8 + j;
        }
    }

    if (octa[0] == '-')
        final = final * -1;

    return final;
}