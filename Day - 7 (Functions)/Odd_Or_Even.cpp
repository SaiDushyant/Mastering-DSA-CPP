#include <iostream>
using namespace std;

int oddOrEven(int a)
{
    if (a % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}

int main()
{
    int a = 8;
    oddOrEven(a);
    return 0;
}