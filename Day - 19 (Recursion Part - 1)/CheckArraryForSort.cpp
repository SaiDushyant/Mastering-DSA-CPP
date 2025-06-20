#include <iostream>
using namespace std;

int isSorted(int arr[], int n, int i = 0)
{
    if (i == n - 1) // base case: last element reached
        return true;

    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSorted(arr, n, i + 1);
}

int main()
{
    int arr[] = {1, 5, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n))
    {
        cout << "The array is sorted.";
    }
    else
    {
        cout << "The array is not sorted.";
    }
    return 0;
}