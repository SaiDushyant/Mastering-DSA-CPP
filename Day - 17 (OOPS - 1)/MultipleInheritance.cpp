#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    int salary;
    string subject;
};

class Student
{
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student
{
public:
    string name;
};

int main()
{
    TA t1;
    t1.cgpa = 10.5;
    cout << t1.cgpa << endl;

    return 0;
}