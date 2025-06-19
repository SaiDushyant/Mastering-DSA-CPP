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
};

class Child : Parent
{
public:
    void show()
    {
        cout << "child Class show.." << endl; // This prints because of overriding
    }
};

int main()
{
    Child c1;
    c1.show(); // child Class show..
    return 0;
}