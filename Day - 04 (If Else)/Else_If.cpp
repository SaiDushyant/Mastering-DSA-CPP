#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Enter the mark : ";
    cin >> mark;

    if (mark >= 90)
    {
        cout << "A";
    }
    else if (mark >= 80)
    {
        cout << "B";
    }
    else
    {
        cout << "C";
    }

    return 0;
}