#include <iostream>
#include <string>
using namespace std;

string removeDuplicate(string str, bool map[26], string ans = "", int i = 0)
{
    if (i == str.length())
    {
        return ans;
    }

    if (map[int(str[i]) - 'a'] != true)
    {
        ans += str[i];
        map[int(str[i]) - 'a'] = true;
    }

    return removeDuplicate(str, map, ans, i + 1);
}

int main()
{
    bool map[26] = {0};
    cout << removeDuplicate("hello", map);
    return 0;
}