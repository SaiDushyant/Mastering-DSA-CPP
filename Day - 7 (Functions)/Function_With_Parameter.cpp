#include <iostream>
using namespace std;

int add(int a, int b) // a and b are parameters
{
    int sum = a + b;
    return sum;
}

int diff(int a, int b)
{
    int diff = a - b;
    return diff;
}

int main()
{
    int a = 10, b = 5;

    cout << "Sum : " << add(a, b) << endl; // a and b are arguments
    cout << "Difference : " << diff(a, b) << endl;

    return 0;
}