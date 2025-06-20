#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int> arr, int target, int i)
{
    if (i == 0)
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }

    return lastOccurence(arr, target, i - 1);
}

int main()
{
    vector<int> arr = {1, 2, 5, 3, 6, 3, 7};
    int target = 3;
    cout << "The index : " << lastOccurence(arr, target, arr.size() - 1);
    return 0;
}