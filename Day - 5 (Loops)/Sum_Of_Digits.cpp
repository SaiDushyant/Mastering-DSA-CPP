#include <iostream>
using namespace std;

int main()
{
    int n = 12345, sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    cout << sum;

    return 0;
}