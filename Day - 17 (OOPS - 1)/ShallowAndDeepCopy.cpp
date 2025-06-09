#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string name;
    string color;
    int *milage1; // Example for Shallow Copy
    int *milage2;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        milage1 = new int; // Shallow Copy
        *milage1 = 12;
        milage2 = new int; // Deep Copy
        *milage2 = 15;
    }

    Car(Car &original) // Custom Copy
    {
        cout << "Copying original to new" << endl;
        name = original.name;
        color = original.color;
        milage1 = original.milage1; // Shallow Copy only the memory address is sent
        milage2 = new int;
        *milage2 = *original.milage2;
    }
};

int main()
{
    Car c1("Audi", "White");
    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << "Shallow Copy : " << endl;
    cout << "c1 : " << c1.milage1 << endl;
    cout << "c2 : " << c2.milage1 << endl;
    cout << "c1 milage : " << *c1.milage1 << endl;
    cout << "c2 milage : " << *c2.milage1 << endl;
    *c2.milage1 = 10;
    cout << "c2 milage : " << *c2.milage1 << endl;
    cout << "c1 milage : " << *c1.milage1 << endl;

    cout << "Deep Copy : " << endl;
    cout << "c1 : " << c1.milage2 << endl;
    cout << "c2 : " << c2.milage2 << endl;
    cout << "c1 milage : " << *c1.milage2 << endl;
    cout << "c2 milage : " << *c2.milage2 << endl;
    *c2.milage2 = 20;
    cout << "c2 milage : " << *c2.milage2 << endl;
    cout << "c1 milage : " << *c1.milage2 << endl;

    return 0;
}