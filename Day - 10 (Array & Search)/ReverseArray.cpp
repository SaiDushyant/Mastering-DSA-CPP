#include <iostream>
using namespace std;

int reverseArray(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 5, 7, 1, 4, 9, 3, 8};
    int n = sizeof(arr) / sizeof(int);

    reverseArray(arr, n);

    return 0;
}