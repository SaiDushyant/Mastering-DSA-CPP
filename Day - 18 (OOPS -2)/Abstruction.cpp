#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // Pure Virtual Function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Draw Circle\n";
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Draw Square\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    // Shape shape1;   -- hows Error cause the function is pure virtual and not implemented
    // shape1.draw();

    return 0;
}