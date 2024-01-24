#include <stdlib.h>

int *ft_range(int min, int max)
{
    if (min == max || min > max)
        return NULL;

    int *tab = (int*)malloc(sizeof(tab));
    int tab_index = 0;

    for (int i = min; i < max; i++)
    {
        tab[tab_index] = i;
        tab_index++;
    }

    return (tab);
}