#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_address(unsigned long addr)
{
	char *base = "0123456789abcdef";
	char hex[17];

	// Convert to base 16
	int hex_i = 0;
	while (addr)
	{
		int remain = addr % 16;	
		hex[hex_i] = base[remain];
		addr = addr / 16;
	}

	// Set the hex variable to 16 bits
	while(hex_i < 16)
	{
		hex[hex_i] = '0';
		hex_i++;
	}
	hex_i--;

	// Print
	while(hex_i+1)
	{
		write(1, &hex[hex_i], 1);
		hex_i--;
	}
	write(1, ":", 1);	
}

void ft_print_values(unsigned char *addr, int offset)
{
	char *base = "0123456789abcdef";
	int i = 0;

	// Printing values as hex
	while (i < 16 && offset - i)
	{
		ft_putchar(base[addr[i] / 16]);
		ft_putchar(base[addr[i] % 16]);

		if (i % 2)
			write(1, " ", 1);
		i++;
	}

	// Setting addr values to 16 bits
	while (i < 16)
	{
		write(1, " ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void ft_print_chars(unsigned char *addr, int offset)
{
	int i = 0;
	while (i < 16 && offset--)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			ft_putchar(addr[i]);
		else
			ft_putchar('.');

		i++;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	p;
	unsigned int	offset;

	offset = 0;
	p = (unsigned long)addr;
	(void)size;
	while (offset < size)
	{
		ft_print_address(p + offset);
		ft_print_values((unsigned char *)(p + offset), size - offset);
		ft_print_chars((unsigned char *)(p + offset), size - offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);	
}
