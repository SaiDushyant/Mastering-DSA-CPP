#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int i = start - 1;
    int pivot = arr[end];

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[end]);

    return i;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivotIdx = partition(arr, start, end);
    quickSort(arr, start, pivotIdx - 1); // Left half
    quickSort(arr, pivotIdx + 1, end);   // Right half
}

int main()
{
    vector<int> arr = {5, 3, 7, 1, 9, 8, 2};
    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}