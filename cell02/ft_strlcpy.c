#include "lib/ft_strlen.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	// Copy the src char to the dest char
	int len = ft_strlen(src);

	// Prevent size error
	if (len >= size)
		len = size - 1;

	for (int i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	//Adding ending char
	dest[len] = '\0';

	return (len);
}
