#include <iostream>
using namespace std;

void funcArr()
{
    int size;
    cout << "Size : ";
    cin >> size;

    int *ptr = new int[size];

    int x = 1;
    cout << "Dynamically Memory Allocated Array" << endl;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    cout << endl;

    delete[] ptr; // To Prevent Memory Leak - Deletes the array ptr
}

void funcInt()
{
    int *ptr = new int;
    *ptr = 5; // Derefer the Pointer and assign the value

    cout << *ptr;

    delete ptr; // Deleting is important if that was not deleted then the a conflict can happen as all are stored in a heap memory together
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // Static Memory Allocation

    cout << "Statically Memory Allocated Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    funcArr();
    funcInt();

    return 0;
}