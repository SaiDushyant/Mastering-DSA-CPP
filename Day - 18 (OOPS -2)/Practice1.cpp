#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Parent Constructor" << endl;
    }
    ~A()
    {
        cout << "Parent Destructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Child Constructor" << endl;
    }
    ~B()
    {
        cout << "Child Destructor" << endl;
    }
};

int main()
{
    B obj;
    return 0;
}

/*
Output :
Parent Constructor
Child Constructor
Child Destructor
Parent Destructor

Because the parent class is first initialzed and all the member
functions and attributes are received from the parent to the
child class only them the child class is initialized.
*/