#include <iostream>
using namespace std;

void sortChar(char *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current)
        {
            swap(arr[previous], arr[previous + 1]);
            previous--;
        }
        arr[previous + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    char arr[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(arr) / sizeof(char);

    sortChar(arr, n);
    return 0;
}