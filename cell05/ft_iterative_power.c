int ft_iterative_power(int nb, int power)
{
    int final = 0;

    for (int i = 0; i < power-1; i++)
        final = final + nb*nb;

    printf("%i", final);
    return final;
}