#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char symbol;

    cout << "Enter the first value : ";
    cin >> a;
    cout << "Enter the second value : ";
    cin >> b;
    cout << "Enter the Operation (+, -, *, /) : ";
    cin >> symbol;

    switch (symbol)
    {
    case '+':
        cout << "The result of a + b : " << a + b;
        break;
    case '-':
        cout << "The result of a - b : " << a - b;
        break;
    case '*':
        cout << "The result of a * b : " << a * b;
        break;
    case '/':
        cout << "The result of a / b : " << a / b;
        break;
    default:
        cout << "Invalid Character";
    }

    return 0;
}