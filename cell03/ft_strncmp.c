int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		if (s1[i] < s2[i])
				return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}

	return (0);
}
