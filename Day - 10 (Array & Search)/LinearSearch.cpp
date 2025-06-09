#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "The value is found at the index : " << i << endl;
        }
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int key = 10;
    int n = sizeof(arr) / sizeof(int);

    linearSearch(arr, n, key);
    return 0;
}