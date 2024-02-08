#include <stdio.h>

#define N 9

// Function to check if it's safe to place a number at a given position
int isSafe(int board[N][N], int row, int col, int num) {
    // Check if the number is not present in the current row and column
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num || board[x][col] == num) {
            return 0;
        }
    }

    // Check if the number is not present in the current 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num) {
                return 0;
            }
        }
    }

    return 1;
}

// Function to print the Sudoku grid
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to solve the Sudoku puzzle using backtracking
int solveSudoku(int board[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            // Find an empty cell
            if (board[row][col] == 0) {
                // Try placing a number in the cell
                for (int num = 1; num <= N; num++) {
                    if (isSafe(board, row, col, num)) {
                        // Place the number if it's safe
                        board[row][col] = num;

                        // Recursively try to solve the rest of the puzzle
                        if (solveSudoku(board)) {
                            return 1; // If successful, return true
                        }

                        // If placing the number didn't lead to a solution, backtrack
                        board[row][col] = 0;
                    }
                }

                return 0; // If no number can be placed, backtrack
            }
        }
    }

    return 1; // If the entire board is filled, the puzzle is solved
}

int main() {
    int sudoku[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    printf("Sudoku Puzzle:\n");
    printBoard(sudoku);

    if (solveSudoku(sudoku)) {
        printf("\nSudoku Solution:\n");
        printBoard(sudoku);
    } else {
        printf("\nNo solution exists.\n");
    }

    return 0;
}
