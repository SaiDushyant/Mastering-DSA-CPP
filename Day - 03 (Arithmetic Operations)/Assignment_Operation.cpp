#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "+=" << (a += 5) << endl;
    cout << "-=" << (a -= 5) << endl;
    cout << "*=" << (a *= 5) << endl;
    cout << "/=" << (a /= 5) << endl;
}