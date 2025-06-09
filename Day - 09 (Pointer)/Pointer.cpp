#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a; // Pointer that stores the address of a

    float PI = 3.14;
    float *ptr2 = &PI;

    int **ptr3 = &ptr; // Pointer of pointer that stores the value of pointer ptr

    cout << &a << "=" << ptr << endl;
    cout << &PI << "=" << ptr2 << endl;
    cout << &ptr << "=" << ptr3 << endl;
    return 0;
}