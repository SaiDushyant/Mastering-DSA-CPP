#include <iostream>
using namespace std;

// Clearing last i bits of a number

void clearLastIBits(int num, int i)
{
    int bitMask = ((~0) << i);

    cout << (num & bitMask) << endl;
}

int main()
{
    clearLastIBits(15, 2);

    return 0;
}