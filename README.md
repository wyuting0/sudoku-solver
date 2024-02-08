# Sudoku Solver

## Description

A simple Sudoku solver implemented in C using the backtracking algorithm. This program allows you to input a Sudoku puzzle and solves it using a backtracking algorithm. It provides a command-line interface to interact with the solver. I coded this project by myself.

## Features

- Solves Sudoku puzzles of varying difficulty levels.
- Provides a clear and readable command-line interface.
- Demonstrates the use of backtracking algorithm for puzzle-solving.

## Getting Started

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/sudoku-solver.git
    ```

2. Compile the program:

    ```bash
    cd sudoku-solver
    gcc sudoku_solver.c -o sudoku_solver
    ```

3. Run the program:

    ```bash
    ./sudoku_solver
    ```

4. Follow the on-screen instructions to input the Sudoku puzzle.

## Usage

- Input your Sudoku puzzle and let the program solve it using the backtracking algorithm.

## Example

```plaintext
Sudoku Puzzle:
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
------+-------+------
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
------+-------+------
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

Sudoku Solution:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
