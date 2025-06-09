#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << "Arithmetic Operators" << endl;

    // Binary operations
    cout << "Addition: " << a + b << endl;       // Addition
    cout << "Subtraction: " << a - b << endl;    // Subtraction
    cout << "Multiplication: " << a * b << endl; // Multiplication
    cout << "Division: " << a / b << endl;       // Division
    cout << "Modulus: " << a % b << endl;        // Modulus

    // Unary operations
    cout << "Increment: " << ++a << endl; // Increment
    cout << "Decrement: " << --b << endl; // Decrement

    return 0;
}