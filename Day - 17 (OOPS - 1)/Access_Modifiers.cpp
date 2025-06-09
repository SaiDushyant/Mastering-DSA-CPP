#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;

public:
    float cgpa;

    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << " %" << endl;
    }
};

int main()
{
    Student s1;
    s1.cgpa = 9.2;
    cout << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}