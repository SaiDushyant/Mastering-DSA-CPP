#include <iostream>
using namespace std;

bool prime(int n)
{

    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n = 50;
    for (int i = 2; i <= n; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}