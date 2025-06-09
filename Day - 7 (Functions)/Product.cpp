#include <iostream>
using namespace std;

int product(int a, int b)
{
    int prod = a * b;
    return prod;
}

int main()
{
    int a = 10, b = 5;

    cout << "Product : " << product(a, b) << endl;

    return 0;
}