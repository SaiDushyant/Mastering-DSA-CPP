#include <iostream>
using namespace std;

void getIthPosition(int num, int i)
{
    int bitMask = 1 << i;

    if (num & bitMask)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}

int main()
{
    getIthPosition(6, 0); // 00000110 SO 0
    getIthPosition(6, 2); // 00000110 SO 1

    return 0;
}