int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

#define NULL ((void*)0)

int compare(char *str1, char *str2)
{
	int len_str1 = ft_strlen(str1);	
	int len_str2 = ft_strlen(str2);

	if (!(len_str1 == len_str2))
		return 0;

	for (int i = 0; i < len_str1; i++)
	{
		if (!(str1[i] == str2[i]))
			return 0;
	}

	return 1;
}

char *ft_strstr(char *str, char *to_find)
{
    int str_len = ft_strlen(str);
    int to_find_len = ft_strlen(to_find);

    for (int i = 0; i <= str_len - to_find_len; i++)
    {
        if (compare(str + i, to_find))
            return str + i;
        
	}

    return NULL;
}


