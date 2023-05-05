#include <iostream>
#include <vector>
using namespace std;
const int N = 3;
bool issafe(vector<vector<int>> &board, int row, int col)
{
    for (int x = 0; x < col; x++) // horiz
        if (board[row][x] == 1)
            return false;

    for (int x = row, y = col; x >= 0 && y >= 0; x--, y--)
        if (board[x][y] == 1)
            return false;

    for (int x = row, y = col; x < N && y >= 0; x++, y--)
        if (board[x][y] == 1)
            return false;
    return true;
}
bool solvequeens(vector<vector<int>> &board, int col)
{
    if (col == N)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        return true;
    }

    for (int i = 0; i < N; i++)
    {
        if (issafe(board, i, col))
        {
            board[i][col] = 1;
            if (solvequeens(board, col + 1))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> board(N, vector<int>(N, 0));
    if (!solvequeens(board, 0))
        cout << "No solution found:";
    return 0;
}