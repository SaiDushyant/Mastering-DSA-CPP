#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "The key is found at " << mid << endl;
            return;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    cout << "The key is not found" << endl;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int key = 12;

    binarySearch(arr, n, key);

    return 0;
}