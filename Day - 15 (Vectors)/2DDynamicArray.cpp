#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter number of Rows : ";
    cin >> row;
    cout << "Enter number of Column : ";
    cin >> col;

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    int x = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}