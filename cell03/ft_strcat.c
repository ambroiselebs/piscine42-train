int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;

    return (i);
}

char *ft_strcat(char *dest, char *src)
{
	// Init len variables
	int dest_len = ft_strlen(dest);
	int src_len = ft_strlen(src);
	int len = dest_len+src_len;

	// Appending src char list to dest char list
	for (int i = 0; i < src_len; i++)
		dest[dest_len+i] = src[i];

	
	// Add null char at the end
	dest[len] = '\0';

	return (dest);
}
