#include <iostream>
using namespace std;

int main()
{
    // Implicit typecasting
    cout << 10 / 3 << endl;
    cout << 10 / 3.0 << endl;

    // Explicit typecasting
    float PI = 3.14;
    cout << (int)PI << endl;
    cout << (float)10 / 3 << endl;
    cout << (char)('a' + 1) << endl; // ASCII value of 'a' is 97, so it will print 98

    return 0;
}