#include <iostream>
using namespace std;

int main()
{
    cout << (5 & 3) << endl;  // 1
    cout << (5 | 3) << endl;  // 7
    cout << (5 ^ 3) << endl;  // 6
    cout << ~6 << endl;       //-7
    cout << ~0 << endl;       //-1
    cout << (7 << 2) << endl; // 28
    cout << (7 >> 2) << endl; // 1

    return 0;
}