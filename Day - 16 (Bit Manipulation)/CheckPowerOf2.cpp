#include <iostream>
using namespace std;

void checkPower(int num)
{
    if ((num & (num - 1)) == 0)
    {
        cout << "It is a power of 2" << endl;
    }
    else
    {
        cout << "It is not a power of 2" << endl;
    }
}

int main()
{
    checkPower(16); // It is a power of 2
    checkPower(15); // It is not a power of 2

    return 0;
}