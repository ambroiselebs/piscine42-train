#include <unistd.h>

#define SIZE 10

int ft_strlen(char *str) {
    int i = 0;

    while (!(str[i] == '\0'))
        i++;

    return (i);
}

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    int len = ft_strlen(str);

    for (int i = 0; i < len; i++)
        write(1, &str[i], 1);
}

void ft_print_board(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            ft_putchar(board[i][j] + '0');
        ft_putchar('\n');
    }
    ft_putchar('$');
    ft_putchar('\n');
}

// return 0 if empty | 1 if full
int ft_is_safe(int board[SIZE][SIZE], int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return 1;

    for (int r = row, c = col; r >= 0 && c >= 0; r--, c--)
        if (board[r][c])
            return 1;

    for (int r = row, c = col; r < SIZE && c >= 0; r++, c--)
        if (board[r][c])
            return 1;

    return 0;
}

int ft_solve_queen(int board[SIZE][SIZE], int col) {
    if (col == SIZE) {
        ft_print_board(board);
        return 1;
    }

    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (ft_is_safe(board, i, col) == 0) {
            board[i][col] = col + 1;
            count += ft_solve_queen(board, col + 1);
            board[i][col] = 0;
        }
    }

    return count;
}

int ft_ten_queens_puzzle(void) {
    int board[SIZE][SIZE] = {{0}};
    return ft_solve_queen(board, 0);
}

int main() {
    int count = ft_ten_queens_puzzle();
    ft_putstr("Total number of solutions: ");
    ft_putchar(count + '0');
    ft_putchar('\n');

    return 0;
}

