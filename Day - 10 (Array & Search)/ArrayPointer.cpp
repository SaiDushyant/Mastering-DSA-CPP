#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    int y = 25;
    ptr = &y;
    cout << *ptr << endl; // The result is 25 as it stores the y's address

    int arr[5];

    arr = &y; // Throws an error as the array pointer is read only and not modifiable
}