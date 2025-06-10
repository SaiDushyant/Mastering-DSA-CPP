#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string color;

    void eat()
    {
        cout << "Eat" << endl;
    }

    void breath()
    {
        cout << "Breath" << endl;
    }
};

class Fish1 : public Animal
{
public:
    int fins;

    void swim()
    {
        cout << "Swim" << endl;
    }
};

class Fish2 : protected Animal
{
public:
    int fins;

    void swim()
    {
        eat();
        cout << "Swim" << endl;
    }
};

int main()
{
    Fish1 f1;
    f1.fins = 3;
    cout << f1.fins << endl;
    f1.breath();
    f1.eat();

    Fish2 f2;
    f2.fins = 3;
    cout << f2.fins << endl;
    // f2.eat(); -> function "Animal::eat" (declared at line 10) is inaccessible inline void Animal::eat()
    f2.swim();

    return 0;
}