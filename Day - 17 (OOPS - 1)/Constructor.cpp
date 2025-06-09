#include <iostream>
#include <string>
using namespace std;

class Car
{
    string name;
    string color;

public:
    // Method 1:
    // Car(string nameVal, string colorVal)
    // {
    //     cout << "Constructor is called. Object is being created." << endl;
    //     name = nameVal;
    //     color = colorVal;
    // }

    // Method 2:
    Car(string name, string color)
    {
        cout << "Constructor is called. Object is being created." << endl;
        this->name = name; // "this" pointer points to the c1 object
        this->color = color;
        // *this.color = color;  - Can also be written like this.
    }

    void start()
    {
        cout << "The car has started." << endl;
    }

    void stop()
    {
        cout << "The car has stopped." << endl;
    }

    // Getter
    string getName()
    {
        return name;
    }

    string getColor()
    {
        return color;
    }
};

int main()
{
    Car c1("Audi A6", "White");

    cout << c1.getName() << endl;
    cout << c1.getColor() << endl;
    return 0;
}