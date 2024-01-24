int ft_str_is_alpha(char *str)
{
    int lenstr = ft_strlen(str);

    // Prevent from empty string
    if (lenstr == 0)
        return (1);

    // Check if there is number
    for (int i = 0; i < lenstr; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            return (0);
    }

    return (1);
}