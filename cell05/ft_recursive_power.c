int ft_recursive_power(int nb, int power)
{
    return (power == 0 || power == 1) ? nb : (nb * ft_recursive_power(nb, power-1));
}