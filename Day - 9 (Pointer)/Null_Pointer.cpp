#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int *ptr2 = NULL;

    cout << ptr << endl; // Gives a Garbage value
    cout << ptr2 << endl;
    cout << *ptr2 << endl; // Throws an Error - segmentation fault

    cout << "End of Program";

    return 0;
}