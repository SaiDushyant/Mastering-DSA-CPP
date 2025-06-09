#include <iostream>
using namespace std;

int decimalToBinary(int decimal)
{
    int binary = 0;
    int power = 1;

    while (decimal > 0)
    {
        int rem = decimal % 2;
        binary += rem * power;
        decimal /= 2;
        power *= 10;
    }

    cout << binary << endl;
}

int main()
{
    decimalToBinary(23);
    return 0;
}