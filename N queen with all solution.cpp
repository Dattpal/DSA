#include <iostream>

using namespace std;

bool isSafe(int board[][10], int row, int col, int n)
{
    for (int i = 0; i < row; i++)
    { // Check if there is a queen in the same column
        if (board[i][col] == 1)
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    { // Check if there is a queen in the left diagonal
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    { // Check if there is a queen in the right diagonal
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}

void printBoard(int board[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
            {
                cout << "Q ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void nQueen(int board[][10], int row, int n)
{
    if (row == n)
    { // Base case: All queens have been placed
        printBoard(board, n);
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {                              // Check if it's safe to place a queen in this cell
            board[row][col] = 1;       // Place the queen in this cell
            nQueen(board, row + 1, n); // Recur for the next row
            board[row][col] = 0;       // Backtrack: Remove the queen from this cell
        }
    }
}

int main()
{
    int n = 8;
    int board[10][10] = {0};

    nQueen(board, 0, n);

    return 0;
}