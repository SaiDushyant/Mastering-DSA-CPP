#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++) // O(n) - Works n times
    {
        cout << arr[i];
    }
    return 0;
}