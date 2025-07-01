#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> createBoard(int n)
{
    vector<vector<char>> board;

    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    return board;
}

void printBoard(const vector<vector<char>> &board)
{
    for (const auto &row : board)
    {
        for (const auto &cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }
}

bool isSafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();

    // Check row - Horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }

    // Check column - Vertical
    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    // Check diagonal - Left
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // Check diagonal - Right
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

void nQueen(vector<vector<char>> board, int row)
{
    int n = board.size();

    if (row == n)
    {
        printBoard(board);
        cout << endl;
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q';
            nQueen(board, row + 1);
            board[row][j] = '.';
        }
    }
}

int main()
{
    int n = 6;
    vector<vector<char>> board = createBoard(n);
    nQueen(board, 0);
    return 0;
}