#include <unistd.h>

void ft_print_comb(void)
{
    char a      = '0';
    char b      = '1';
    char c      = '2';

    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);

                // Vérifier si c est égal à '9' pour éviter la virgule après le dernier nombre
                if (!(a == '7' && b == '8' && c == '9'))
                    write(1, ", ", 2);

                c++;
            }
            c = ++b + 1;
        }
        b = ++a;
        c = b + 1;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}
