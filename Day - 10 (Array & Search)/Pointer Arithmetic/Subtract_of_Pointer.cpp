#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << ptr2 - ptr1 << endl;
    return 0;
}