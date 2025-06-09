#include <iostream>
using namespace std;

int main()
{
    int n = 12345, sum = 0;

    while (n > 0)
    {
        int lastDig = n % 10;
        if (lastDig % 2 != 0)
        {
            sum += lastDig;
        }

        n /= 10;
    }

    cout << "Sum : " << sum << endl;

    return 0;
}