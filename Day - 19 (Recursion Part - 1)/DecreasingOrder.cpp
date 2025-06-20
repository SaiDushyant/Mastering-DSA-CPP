#include <iostream>
using namespace std;

int decreasingOrder(int n)
{
    cout << n << endl;
    if (n == 1)
    {
        return 1;
    }
    return decreasingOrder(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    decreasingOrder(n);
    return 0;
}