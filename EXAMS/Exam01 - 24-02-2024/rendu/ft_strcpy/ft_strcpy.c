char *ft_strcpy(char *s1, char *s2)
{
    char *original_s1 = s1;

    while ((*s1++ = *s2++) != '\0')
        ;

    return original_s1;
}
