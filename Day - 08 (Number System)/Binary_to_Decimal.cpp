#include <iostream>
using namespace std;

int binaryToDecimal(int binary)
{
    int decimal = 0;
    int power = 1;

    while (binary > 0)
    {
        int lastDig = binary % 10;
        decimal += lastDig * power;
        power *= 2;
        binary /= 10;
    }

    cout << decimal << endl;
}

int main()
{
    binaryToDecimal(10);
    return 0;
}