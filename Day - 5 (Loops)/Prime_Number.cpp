#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    bool isPrime = true;
    cout << "Enter the number to check : ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is not a prime number.";
    }
}