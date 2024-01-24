#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (!(str[i] == '\0'))
		i++;

	return (i);
}
int	get_malloc_size(int size, char **strs, char *sep)
{
	int	i = 0;
	int	res = 0;

	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);

	return (res + 1);
}

char *ft_strcat(char *dest, char *src)
{
	int dest_len = ft_strlen(dest);
	int src_len = ft_strlen(src);
	int len = dest_len+src_len;

	for (int i = 0; i < src_len; i++)
		dest[dest_len+i] = src[i];

	
	dest[len] = '\0';

	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;

	res = malloc(get_malloc_size(size, strs, sep) * sizeof(char));

	if (!res)
		return (NULL);
	
	res[0] = 0;
	if (size == 0)
		return (res);

	for (int i = 0; i < size; i++)
	{
		ft_strcat(res, strs[i]);
		if (i != size-1)
			ft_strcat(res, sep);
	}

	res[ft_strlen(res)] = 0;

	return (res);
}
