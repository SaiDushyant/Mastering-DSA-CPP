#include <iostream>
#include <string>
using namespace std;

void counter()
{
    static int count = 0;
    count++;
    cout << "Count : " << count << endl;
}

class Example
{
public:
    static int x; // Direct data assigning is not possible when using static in class
};

int Example::x = 0; // Data need to initialised outside of class

int main()
{
    counter();
    counter();
    counter();

    Example e1;
    Example e2;
    Example e3;

    cout << e1.x++ << endl; // 0
    cout << e2.x++ << endl; // 1
    cout << e3.x++ << endl; // 2

    return 0;
}