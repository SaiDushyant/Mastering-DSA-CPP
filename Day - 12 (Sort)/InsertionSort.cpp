#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current)
        {
            swap(arr[previous], arr[previous + 1]);
            previous--;
        }
        arr[previous + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);

    return 0;
}