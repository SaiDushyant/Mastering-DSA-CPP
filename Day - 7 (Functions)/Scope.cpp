#include <iostream>
using namespace std;

int a = 10; // Variable with Global scope ie accessible by all functions

int main()
{
    {
        int x = 10;
        cout << x;
    }
    // cout<<x; this wil show a error as the x is a local scope

    cout << a;

    return 0;
}