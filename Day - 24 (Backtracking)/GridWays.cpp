#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gridWays(int r, int c, int n, int m)
{
    if (r == n - 1 && c == m - 1)
    {
        return 1;
    }

    if (r >= n || c > +m)
    {
        return 0;
    }

    // Right
    int val1 = gridWays(r, c + 1, n, m);

    // Down
    int val2 = gridWays(r + 1, c, n, m);

    return val1 + val2;
}

int main()
{
    int n = 3, m = 3;

    cout << gridWays(0, 0, n, m);
    return 0;
}