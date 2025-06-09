#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";
    cout << str << endl;
    str = "World";
    cout << str << endl;
    string str2;
    getline(cin, str2);
    cout << str2;
    return 0;
}