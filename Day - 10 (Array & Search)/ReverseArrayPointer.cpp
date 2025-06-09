// 2 Pointer Approach
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n - 1;

    while (start <= end)
    {
        // swap(arr[start],arr[end]); Inbuild c++ function to swap
        int temp = arr[start]; // Initializing temporary variable
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}