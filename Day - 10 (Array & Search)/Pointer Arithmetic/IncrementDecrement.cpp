#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    int ch = 'a';
    int *ptr2 = &ch;

    cout << ptr << endl; // 0x61ff08
    ptr++;               // 1 int ++ ie 4 Bytes
    cout << ptr << endl; // 0x61ff0c

    cout << ptr2 << endl;
    ptr2++;
    cout << ptr2 << endl;
    return 0;
}