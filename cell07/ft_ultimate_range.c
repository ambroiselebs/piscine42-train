#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }

    *range = (int*)malloc((max-min) * 4);

    for (int i = 0; i (max-min); i++)
        (*range)[i] = min+i;

    return (max-min);
}
