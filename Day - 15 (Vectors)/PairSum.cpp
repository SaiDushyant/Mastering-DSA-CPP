#include <iostream>
#include <vector>
using namespace std;

void bruteForce(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

void twoPointerApproach(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;

    while (start < end)
    {
        if ((arr[start] + arr[end]) == target)
        {
            cout << arr[start] << " " << arr[end] << endl;
            end--;
        }
        else if ((arr[start] + arr[end]) < target)
        {
            start++;
        }
        else if ((arr[start] + arr[end]) > target)
        {
            end--;
        }
    }
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    bruteForce(arr, target);
    twoPointerApproach(arr, target);

    return 0;
}