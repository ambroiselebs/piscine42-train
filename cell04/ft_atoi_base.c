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
	int len = ft_strlen(str);

	for (int i = 0; i < len; i++)
		write(1, &str[i], 1);
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

    return (res);
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


void ft_putnbr_base(int nbr, char *base)
{
    // Get base
    int len = ft_strlen(base);

	if (len < 2)
		return;
		
    // Base 2
    if (len == 2)
    {
		// Convert to base 2
		char bin[33];
    	int i = 0;

    	// Gérer le cas du nombre négatif
    	if (nbr < 0) {
        	bin[i++] = '-';
        	nbr = -nbr;
    	}

    	while (nbr > 0) {
        	bin[i++] = (nbr % 2) + '0';
        	nbr = nbr / 2;
    	}
    	bin[i] = '\0';

    	// Inverser la chaîne binaire
    	ft_reversestr(bin + (bin[0] == '-'), ft_strlen(bin + (bin[0] == '-')));

    	// Afficher la chaîne binaire
    	ft_putstr(bin);

	}
    // Base Hexa
    if (len == 16)
    {
		char dec[33]; // Taille suffisante pour contenir le résultat
        int i = 0;

		// Gérer le cas du nombre négatif
    	if (nbr < 0) {
			dec[i++] = '-';
        	nbr = -nbr;
    	}

        while (nbr > 0) {
            int remain = nbr % 16;
            dec[i] = base[remain];
            nbr = nbr / 16;

            i++;
        }

        dec[i] = '\0';
		ft_reversestr(dec + (dec[0] == '-'), ft_strlen(dec + (dec[0] == '-')));

        // Afficher la séquence directement sans inversion
        ft_putstr(dec);
	}
    // Base 8
    else if (len == 8)
    {
		char octa[33];
		int i = 0;

		// Gérer le cas du nombre négatif
    	if (nbr < 0) {
        	octa[i++] = '-';
        	nbr = -nbr;
    	}

		while (nbr > 0)
		{
			int remain = nbr % 8;
			octa[i] = base[remain];
			nbr = nbr / 8;
			i++;
		}

		octa[i] = '\0';
		ft_reversestr(octa + (octa[0] == '-'), ft_strlen(octa + (octa[0] == '-')));

		ft_putstr(octa);
    }
	else
	{
		ft_putnbr(nbr);
	}
}

int ft_atoi_base(char *str, char *base)
{
	char str_bin[33];	

	// Executing ft_atoi with str
	int nbr = ft_atoi(str);

	// Printing numbers with good base
	str_bin = ft_putnbr_base(nbr, base);

	// Convert str to bin depending on base
	

	return 0;
}

int main(void)
{
	char str[12] = "+--42abcf54";
	char *base = "01";

	ft_atoi_base(str, base);
}
