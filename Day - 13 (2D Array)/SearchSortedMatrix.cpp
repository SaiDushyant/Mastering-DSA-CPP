#include <iostream>
using namespace std;

/*
High Time complexity but simple.
Time Complexity : O(n**2)
*/
int bruteForce(int arr[4][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Element found at position : " << i << "," << j << endl;
            }
        }
    }
}

/*
Relatively simple but requires row-wise or column-wise sort matrix
to perform
Time Complexity : O(n*logn)
*/
int rowWiseBinarySearch(int arr[4][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[i][mid] == key)
            {
                cout << "Element found at : " << i << "," << mid << endl;
                break;
            }
            else if (arr[i][mid] < key)
            {
                start = mid + 1;
            }
            else if (arr[i][mid] > key)
            {
                end = mid - 1;
            }
        }
    }
}

/*
Requires both the row-wise and column-wise array to be sorted in order
to perform search.
Time Complexity : O(n+m) and If n >>> m - O(n) and If m >>> n - O(m)
*/
int stairCaseSearch(int arr[4][4], int n, int m, int key)
{
    int r = n - 1;
    int c = 0;
    while (r >= 0 && c < m)
    {
        if (arr[r][c] == key)
        {
            cout << "Found key at : " << r << "," << c << endl;
            break;
        }
        else if (arr[r][c] > key)
        {
            r--;
        }
        else if (arr[r][c] < key)
        {
            c++;
        }
    }
}

int main()
{
    int arr[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    int n = 4, m = 4;
    int key = 35;

    bruteForce(arr, n, m, key);
    rowWiseBinarySearch(arr, n, m, key);
    stairCaseSearch(arr, n, m, key);

    return 0;
}