#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    cout << "The sum : " << sum(n);
    return 0;
}