#include "ft_putchar.h"

void rush(int x, int y)
{
	// Horizontal
	for (int dx = 0; dx < x; dx++)
	{
		if (dx == 0 || dx == x-1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}

	ft_putchar('\n');

	// Vertical
	for (int dy = 0; dy < y-2; dy++)
	{	
		ft_putchar('B');
		for (int dx = 0; dx < x-2; dx++)
			ft_putchar(' ');
		
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
	}

	// Horizontal bottom
	if (y > 1)
	{
		for (int dx = 0; dx < x; dx++)
		{
			if (dx == 0 || dx == x-1)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
	}	
}
