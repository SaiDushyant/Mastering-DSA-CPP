#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << &a << endl;
    cout << *ptr << endl; // Dereference

    *ptr = 20;
    cout << a << endl;

    return 0;
}