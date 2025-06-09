#include <iostream>
using namespace std;

void setIthPosition(int num, int i)
{
    int bitMask = 1 << i;

    cout << (num | bitMask) << endl;
}

int main()
{
    setIthPosition(6, 3);

    return 0;
}