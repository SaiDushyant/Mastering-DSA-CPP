#include <iostream>
using namespace std;

class Example
{
public:
    Example()
    {
        cout << "Constructor\n";
    }

    ~Example()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    int a = 0;
    if (a == 0)
    {
        static Example eg1;
    }

    /*
    If normal object was declared
    if (a == 0)
    {
        Example eg1;
    }

    Then Output :
    Constructor
    Destructor
    Code example...

    If static oject was declared
    if (a == 0)
    {
        static Example eg1;
    }

    Then Output:
    Constructor
    Code example...
    Destructor
    */

    cout << "Code example...\n";
    return 0;
}