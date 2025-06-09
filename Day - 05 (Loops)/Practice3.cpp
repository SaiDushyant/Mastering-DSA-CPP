#include <iostream>
using namespace std;

int main()
{
    int num;
    while (true)
    {
        cout << "Enter a number : ";
        cin >> num;
        if (num % 10 != 0)
        {
            cout << "The number : " << num << endl;
        }
        else
        {
            continue;
        }
    }
}