int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int dest_len = 	ft_strlen(dest);
	int len = dest_len+nb;

	for (unsigned int i = 0; i < nb; i++)
		dest[dest_len+i] = src[i];

	dest[len] = '\0';

	return (dest);
}
