#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived" << endl;
    }
};

int main()
{
    Base *b = new Derived();
    b->print(); // Derived
    delete b;
    return 0;
}