#include <stdio.h>

int ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);

	for (int i = 2; i * i <= nb; i++)
	{
		if (nb % i == 0)
			return (0);
	}

	return (1);
}

int ft_find_next_prime(int nb)
{
	int to_test = nb+1;

	while (ft_is_prime(to_test) != 1)
		to_test++;


	return (to_test);
}

int main(void)
{
	printf("%i", ft_find_next_prime(7));
}
