#include <iostream>
#include <cstring>
using namespace std;

void validPalindrome(char str[], int n)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        if (str[st] != str[end])
        {
            cout << "Not a palindrome" << endl;
            return;
        }
        st++;
        end--;
    }
    cout << "It is a Palindrome";
}

int main()
{
    char str[] = "apple";
    char str2[] = "racecar";

    validPalindrome(str, strlen(str));
    validPalindrome(str2, strlen(str2));

    return 0;
}