#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void show(int num)
    {
        cout << "Number : " << num << endl;
    }
    void show(string word)
    {
        cout << "String : " << word << endl;
    }
};

int main()
{
    Print p1;
    p1.show(10);
    p1.show("Hello");

    return 0;
}