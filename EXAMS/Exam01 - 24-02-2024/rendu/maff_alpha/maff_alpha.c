#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char c = 'a';
	char temp;
	int i = 0;

	while (!(i == 26))
	{
		if ((i+1)%2 == 0)
		{
			temp = c;
			c -= 32;
			ft_putchar(c);
			c = temp;
		}
		else
			ft_putchar(c);

		c++;
		i++;
	}

	ft_putstr("\n");
	return 0;
}
