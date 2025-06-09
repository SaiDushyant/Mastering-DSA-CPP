#include <iostream>
using namespace std;

void practice(int num, int i, int val)
{
    int bitMask = (val == 1) ? (1 << i) : ~(1 << i);

    cout << ((val == 1) ? (num | bitMask) : (num & bitMask)) << endl;
}

// Method 2

// void practice(int num, int i, int val)
// {
//     num = num & ~(1 << i);

//     num = num | (val << i);

//     cout << num << endl;
// }

int main()
{
    practice(7, 2, 0);
    practice(7, 3, 1);

    return 0;
}