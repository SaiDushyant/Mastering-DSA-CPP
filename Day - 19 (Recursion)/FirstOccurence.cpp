#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr, int target, int i = 0)
{
    if (i == arr.size())
        return -1;

    if (arr[i] == target)
        return i;

    return firstOccurence(arr, target, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;
    cout << "The number is at the index : " << firstOccurence(arr, target);
    return 0;
}