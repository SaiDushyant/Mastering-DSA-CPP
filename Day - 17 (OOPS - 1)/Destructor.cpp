#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 10;
    }

    Car(Car &original) // Custom Copy
    {
        cout << "Copying original to new";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car()
    {
        cout << "Deleting object" << endl;
        if (mileage != NULL)
        {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main()
{
    Car c1("Audi", "White");
    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << c2.mileage << endl;

    return 0;
}