#include <iostream>
using namespace std;

bool Prime(int a)
{
    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a = 7777773;
    bool isPrime = Prime(a);
    cout << a << (isPrime ? " is a prime number" : " is not a prime number") << endl;
    return 0;
}