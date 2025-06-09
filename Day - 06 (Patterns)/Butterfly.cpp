#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = (a * 2) - (2 * i); k >= 1; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int l = a; l >= 1; l--)
    {
        for (int m = l; m >= 1; m--)
        {
            cout << "*";
        }
        for (int n = 1; n <= (a * 2) - (l * 2); n++)
        {
            cout << " ";
        }
        for (int m = l; m >= 1; m--)
        {
            cout << "*";
        }

        cout << endl;
    }
}