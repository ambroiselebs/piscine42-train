#include <unistd.h>

void ft_print_comb2(void)
{
    char a      = '0';
    char b      = '0';

    char c      = '0';
    char d      = '1';

    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, " ", 1);
                    write(1, &c, 1);
                    write(1, &d, 1);

                    // Vérifier si c est égal à '9' pour éviter la virgule après le dernier nombre
                    if (!(a == '9' && b == '8' && c == '9' && d == '9'))
                        write(1, ", ", 2);

                    d++;
                }
                d = '0';
                c++;
            }
            c = '0';
            b++;
            d = b + 1;
        }
        b = '0';
        a++;
        c = b;
        d = b + 1;
    }
}