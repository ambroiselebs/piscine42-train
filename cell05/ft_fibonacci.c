int ft_fibonacci(int index)
{
	return index <= 1 ? index : ft_fibonacci(index-1) + ft_fibonacci(index-2);
}
