#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void breathe()
    {
        cout << "Breathe" << endl;
    }
    void eat()
    {
        cout << "Eat" << endl;
    }
};

class Dog : public Animal
{
public:
    void hasTail()
    {
        cout << "It has tail" << endl;
    }
};

class Fish : public Animal
{
public:
    void inWater()
    {
        cout << "It lives in water" << endl;
    }
};

int main()
{
    Fish f1;
    f1.breathe();
    f1.inWater();

    Dog d1;
    d1.breathe();
    d1.hasTail();

    return 0;
}