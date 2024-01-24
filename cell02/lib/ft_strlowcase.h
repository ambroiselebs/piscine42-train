char *ft_strlowcase(char *str)
{
    int lenstr = ft_strlen(str);

    for (int i = 0; i < lenstr; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    return (str);
}
