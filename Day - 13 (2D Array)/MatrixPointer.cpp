#include <iostream>
using namespace std;

void func(int arr[][4], int n, int m)
{
    cout << arr << endl;
    cout << *arr << endl;
    cout << **arr + 1 << endl;
    cout << *(*(arr + 2) + 1) << endl; // 10
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = 3, m = 4;

    cout << arr << endl;     // 0x61fed0
    cout << arr + 1 << endl; // 0x61fed0 + 16 = 0x61fee0

    func(arr, n, m);

    return 0;
}