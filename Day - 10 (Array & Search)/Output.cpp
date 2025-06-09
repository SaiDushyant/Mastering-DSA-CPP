#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {1, 2, 3, 4, 5};
    int length = sizeof(marks) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}