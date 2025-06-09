#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }

    cout << endl;

    for (char ch : str) // Special method only for string
    {
        cout << ch << ",";
    }
    return 0;
}