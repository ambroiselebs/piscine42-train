#include <unistd.h>
#include "ft_putchar.h"

void ft_print_combn_recursive(int n, int start, int current, int *arr) {
    if (current == n) {
        for (int i = 0; i < n; i++) {
            ft_putchar(arr[i] + '0');
        }

        if (arr[0] != 10 - n) {
            write(1, ", ", 2);
        }

        return;
    }

    for (int i = start; i <= 9; i++) {
        arr[current] = i;
        ft_print_combn_recursive(n, i + 1, current + 1, arr);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n >= 10) {
        return;
    }

    int arr[n];
    ft_print_combn_recursive(n, 0, 0, arr);
    ft_putchar('\n');
}

int main() {
    ft_print_combn(2); // Vous pouvez remplacer 2 par la valeur souhaitée de n
    return 0;
}
