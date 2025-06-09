#include <iostream>
using namespace std;

int changeA(int a)
{
    a = 20;
    cout << "Value of A inside function : " << a << endl;
    cout << "Address of A inside function : " << &a << endl;
}

int main()
{
    int a = 10;
    changeA(a);
    cout << "Value of A outside function : " << a << endl;
    cout << "Address of A outside function : " << &a << endl;
    return 0;
}