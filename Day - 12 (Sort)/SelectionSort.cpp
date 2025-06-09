#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        bool isSwap = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                swap(arr[j], arr[minIdx]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[] = {5, 4, 1, 3, 2};
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);

    SelectionSort(arr, n);

    return 0;
}