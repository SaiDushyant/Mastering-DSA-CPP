#include <iostream>
#include <string>
#include <vector>
using namespace std;

void findSubset(string str, string subset)
{
    if (str.size() == 0)
    {
        cout << subset << "\n";
        return;
    }
    char ch = str[0];

    // Yes Choice
    findSubset(str.substr(1, str.size() - 1), subset + ch);

    // No Choice
    findSubset(str.substr(1, str.size() - 1), subset);
}

int main()
{
    string str = "abc";
    string subset = "";
    findSubset(str, subset);
    return 0;
}