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
        cout << "Breathe" << endl;
    }
};

class Mammal : public Animal
{
public:
    string bloodType = "warm";
};

class Dog : public Mammal
{
public:
    void tail()
    {
        cout << "Has Tail" << endl;
    }
};

int main()
{
    Dog d1;
    cout << d1.bloodType << endl;
    d1.breathe();
    d1.eat();
    d1.tail();

    return 0;
}