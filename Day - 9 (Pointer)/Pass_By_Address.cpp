#include <iostream>
using namespace std;

void changeA(int *ptr)
{
    *ptr = 20;
    cout << "Value of A inside function : " << *ptr << endl;
    cout << "Address of A inside function : " << ptr << endl;
}

int main()
{
    int a = 10;
    cout << "Value of A before calling function : " << a << endl;
    changeA(&a);

    cout << "Value of A outside function : " << a << endl;
    cout << "Address of A outside function : " << &a << endl;

    return 0;
}