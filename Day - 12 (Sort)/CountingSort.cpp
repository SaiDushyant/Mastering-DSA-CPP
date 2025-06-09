#include <iostream>
#include <climits>
using namespace std;

void countingSort(int arr[], int n)
{
    int freqArr[100000];
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        freqArr[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freqArr[i] > 0)
        {
            arr[j++] = i;
            freqArr[i]--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr, n);
    return 0;
}