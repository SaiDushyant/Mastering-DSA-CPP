#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int halfPower = power(x, n / 2);
    int halfPowerSquare = halfPower * halfPower;

    if (n % 2 != 0)
    {
        return x * halfPowerSquare;
    }
    return halfPowerSquare;
}

int main()
{
    cout << "2^5 : " << power(2, 5);
    return 0;
}