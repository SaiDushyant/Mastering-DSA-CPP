#include <iostream>
#include <string>
using namespace std;

void func(string str, string ans)
{
    if (str.empty())
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        string newAns = ans + str[i];
        string newStr = str;
        newStr.erase(i, 1);

        func(newStr, newAns);
    }
}

int main()
{
    string str = "abc", ans = "";

    func(str, ans);

    return 0;
}