#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int len)
{
    for (int i = 0; i < len; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }

    cout << word << endl;
}

void toLower(char word[], int len)
{
    for (int i = 0; i < len; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            word[i] = ch - 'A' + 'a';
        }
        else
        {
            continue;
        }
    }

    cout << word << endl;
}

int main()
{
    char word[] = "ApPle";
    int len = strlen(word);

    toUpper(word, len);
    toLower(word, len);

    return 0;
}