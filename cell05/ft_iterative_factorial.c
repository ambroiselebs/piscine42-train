int ft_iterative_factorial(int nb)
{
    int final = 1;

    for (int i = 1; i <= nb; i++)
        final = final * i;

    printf("%i", final);
    return final;
}