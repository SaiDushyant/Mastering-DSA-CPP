#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int largest = 0;
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The largest in the array : " << largest << endl;
    return 0;
}