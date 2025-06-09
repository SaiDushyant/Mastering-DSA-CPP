#include <iostream>
using namespace std;

int factorial(int a)
{
    if (a == 1 || 0)
    {
        cout << "1";
    }
    else
    {
        int fact = 1;
        for (int i = 1; i <= a; i++)
        {
            fact *= i;
        }
        cout << fact;
    }
}

int main()
{
    int a = 5;
    factorial(a);
    return 0;
}