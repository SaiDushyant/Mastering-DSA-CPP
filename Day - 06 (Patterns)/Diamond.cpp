#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int l = n; l >= 1; l--)
    {
        for (int m = n - l; m >= 1; m--)
        {
            cout << " ";
        }
        for (int o = (l * 2) - 1; o >= 1; o--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}