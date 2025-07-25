#include <iostream>
#include <string>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void changeArr(int arr[], int n, int i)
{
    if (i == n)
    {
        printArr(arr, n);
        return;
    }
    arr[i] = i + 1;
    changeArr(arr, n, i + 1);
    arr[i] -= 2;
}

int main()
{
    int arr[5] = {0};
    int n = 5;
    int i = 0;
    changeArr(arr, n, i);
    return 0;
}