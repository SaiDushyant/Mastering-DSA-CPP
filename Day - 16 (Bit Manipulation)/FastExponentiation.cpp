#include <iostream>
using namespace std;

void fastExponentiation(int x, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            ans *= x;
        }
        n = n >> 1;
        x = x * x;
    }

    cout << ans << endl;
}

int main()
{

    fastExponentiation(3, 5);
    return 0;
}