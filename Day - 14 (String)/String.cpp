#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char arr2[5] = "code"; // String Literal does not need a \0 - Null Character
    char arr3[4];

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr << endl;
    cout << arr2 << endl;
    cout << strlen(arr) << endl;
    cout << arr3 << endl;

    return 0;
}