#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void rev_print(char *str) {
    int i = 0;

    // Find the length of the string
    while (str[i] != '\0') {
        i++;
    }

    // Print the string in reverse order
    while (i > 0) {
        i--;
        ft_putchar(str[i]);
    }

    ft_putchar('\n');
}

int main(int argc, char *argv[]) {
    // Check if there is exactly one command-line argument
    if (argc == 2) {
        // If there is, call rev_print with the provided argument
        rev_print(argv[1]);
    } else {
        // If not, just print a newline
        ft_putchar('\n');
    }

    return 0;
}
