#include <iostream>
using namespace std;

void oddOrEven(int num)
{
    if ((num & 1) == 1)
    {
        cout << "It is an Odd number";
    }
    else if ((num & 1) == 0)
    {
        cout << "It is an Even number";
    }
}

int main()
{
    int num = 6;
    oddOrEven(num);

    return 0;
}