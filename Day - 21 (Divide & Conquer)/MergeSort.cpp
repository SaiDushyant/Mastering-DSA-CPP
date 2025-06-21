#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int end, int mid)
{
    vector<int> temp;
    int i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Temporary Array ti Original Array
    for (int i = start, x = 0; i <= end; i++)
    {
        arr[i] = temp[x];
        x++;
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2; // mid = start + (end - start) / 2

    mergeSort(arr, start, mid);   // Left half
    mergeSort(arr, mid + 1, end); // Right hlf

    merge(arr, start, end, mid); // Conquer
}

int main()
{
    vector<int> arr = {5, 3, 8, 4, 2, 9};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}