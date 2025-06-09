#include <iostream>
#include <climits>
using namespace std;

void maxSubArray(int arr[], int n)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout << sum << ",";
            // maxSum = max(maxSum,sum)   - Inbuild max function
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
        cout << endl;
    }
    cout << "The Max sum = " << maxSum;
}

int main()
{
    int arr[] = {-2, -3, -6, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    maxSubArray(arr, n);

    return 0;
}