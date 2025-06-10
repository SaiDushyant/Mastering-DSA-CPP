#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eat" << endl;
    }
    void breathe()
    {
        cout << "Breath" << endl;
    }
};

class Fish : public Animal
{
public:
    void swim()
    {
        cout << "Swim" << endl;
    }
};

int main()
{
    Fish f1;
    f1.swim();
    f1.breathe();
    f1.eat();

    return 0;
}