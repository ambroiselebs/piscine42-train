int ft_recursive_factorial(int nb)
{
    return (nb == 0 || nb == 1) ? 1 : (nb * ft_recursive_factorial(nb - 1));
}