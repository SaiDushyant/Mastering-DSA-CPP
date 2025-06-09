#include <iostream>
#include <cstring>
using namespace std;

void reverseWord(char str[], int n)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        swap(str[st], str[end]);
        st++;
        end--;
    }

    cout << str << endl;
}

int main()
{
    char str[] = "code";

    reverseWord(str, strlen(str));

    return 0;
}