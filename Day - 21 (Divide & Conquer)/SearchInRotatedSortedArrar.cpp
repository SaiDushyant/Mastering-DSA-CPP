#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[start] <= arr[mid])
    {
        if (arr[start] <= target && target <= arr[mid])
        {
            return search(arr, start, mid - 1, target); // Left side
        }
        else
        {
            return search(arr, mid + 1, end, target); // Right side
        }
    }
    else
    {
        if (arr[mid] <= target && target <= arr[end])
        {
            return search(arr, mid + 1, end, target); // Right side
        }
        else
        {
            return search(arr, start, mid - 1, target); // Left side
        }
    }
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << "Found at the Index : " << search(arr, 0, arr.size() - 1, target);
    return 0;
}