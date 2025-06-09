#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 6, 1, 4};
    int n = sizeof(arr) / sizeof(int);
    int copyArr[n];

    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        copyArr[i] = arr[j];
    }

    for (int j = 0; j < n; j++)
    {
        arr[j] = copyArr[j];
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    cout << endl;
    return 0;
}