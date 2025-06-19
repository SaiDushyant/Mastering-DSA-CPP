#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Parent Class Show.." << endl;
    }

    virtual void hello()
    {
        cout << "parent hello\n";
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "child Class show.." << endl; // This prints because of overriding
    }

    void hello()
    {
        cout << "child hello\n";
    }
};

int main()
{
    Child c1;
    Parent *ptr;

    ptr = &c1;    // Run time binding
    ptr->hello(); // Virtual Function

    return 0;
}