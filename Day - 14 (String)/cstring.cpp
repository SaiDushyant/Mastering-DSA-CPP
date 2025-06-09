#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "code";
    char str2[100];

    // str2 = "code";  A string literal cannot be directly assigned to a character array
    strcpy(str2, "Hello"); // use strcpy to assign a string literal

    cout << str1 << endl;
    cout << str2 << endl;

    strcpy(str2, str1);
    cout << str2 << endl;

    char str3[] = "Hello ";
    char str4[] = "World";

    cout << strcat(str3, str4) << endl;
    cout << strcmp(str3, str4) << endl; // Compares the first letter of both strings

    return 0;
}