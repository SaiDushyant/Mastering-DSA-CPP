#include <iostream>
using namespace std;

void countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += (num & 1);
        num = num >> 1;
    }

    cout << count << endl;
}

int main()
{
    countSetBits(10);

    return 0;
}