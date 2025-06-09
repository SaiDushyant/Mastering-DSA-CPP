#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        cout << "Not a Anagram";
        return false;
    }

    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        count[str2[i] - 'a']--;
        if (count[str2[i] - 'a'] < 0)
        {
            cout << "Not a Anagram";
            return false;
        }
    }

    cout << "It is a anagram";
}

int main()
{
    string str1 = "anagram";
    string str2 = "naggram";

    isAnagram(str1, str2);

    return 0;
}