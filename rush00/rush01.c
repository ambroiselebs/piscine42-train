#include "ft_putchar.h"

void rush(int x, int y)
{
	// Horizontal
	for (int dx = 0; dx < x; dx++)
	{
		// Corners
		if (dx == 0)
			ft_putchar('/');
		else if (dx == x-1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}

	ft_putchar('\n');
	// Vertical
	for (int dy = 0; dy < y-2; dy++)
	{
		// Left line
		ft_putchar('*');

		// Space between
		if (y > 1)
		{
			for (int dx = 0; dx < x-2; dx++)
				ft_putchar(' ');

			// Right line
			if (x > 1)
				ft_putchar('*');
		}

		ft_putchar('\n');
	}

	// Bottom Horizontal
	if (y > 1)
	{
		for (int dx = 0; dx < x; dx++)
		{
			// Corners
			if (dx == 0)
				ft_putchar('\\');
			else if (dx == x-1)
				ft_putchar('/');
			else	
				ft_putchar('*');
		}	
	}
}
