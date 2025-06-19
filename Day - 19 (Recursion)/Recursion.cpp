#include <iostream>
using namespace std;

void func()
{
    cout << "Function call\n";
    func();
}

int main()
{
    func();
    return 0;
}