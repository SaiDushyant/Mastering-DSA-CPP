#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    cout << ptr + 3 << endl;
    return 0;
}