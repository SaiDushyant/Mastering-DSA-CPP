#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    cout << str.length() << endl;     // 5
    cout << str.at(1) << endl;        // e
    cout << str.substr(0, 2) << endl; // He
    cout << str.find("o") << endl;    // 4 - Returns the first index of the word found

    return 0;
}