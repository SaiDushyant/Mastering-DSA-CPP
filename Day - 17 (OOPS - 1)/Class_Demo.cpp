#include <iostream>
#include <string>
using namespace std;

class Student
{
    // Properties
    string name;
    float cgpa;

    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << endl;
    }
};

int main()
{
    Student s1;
    cout << sizeof(s1) << endl;
    return 0;
}