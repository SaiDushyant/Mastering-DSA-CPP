#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter the number : ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " is Even.";
    }
    else
    {
        cout << a << " is Odd.";
    }

    return 0;
}