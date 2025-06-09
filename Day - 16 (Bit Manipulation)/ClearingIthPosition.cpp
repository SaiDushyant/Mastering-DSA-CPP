#include <iostream>
using namespace std;

void clearingIthPosition(int num, int i)
{
    int bitMask = 1 << i;
    bitMask = ~bitMask;
    cout << (num & bitMask);
}

int main()
{
    clearingIthPosition(6, 1);

    return 0;
}