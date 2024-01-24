void ft_sort_int_tab(int *tab, int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i =- 1;
        }
    }
}