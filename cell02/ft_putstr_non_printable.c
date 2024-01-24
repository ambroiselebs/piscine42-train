#include <unistd.h>
#include "lib/ft_strlen.h"

void ft_putstr_non_printable(char *str)
{
	int len = ft_strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
			{
				write(1, "0", 1);
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
	}
}

int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";	

	ft_putstr_non_printable(str);
}
