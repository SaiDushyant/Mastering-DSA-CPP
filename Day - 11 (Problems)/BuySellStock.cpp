#include <iostream>
#include <climits>
using namespace std;

void buyAndSell(int arr[], int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], arr[i - 1]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currentProfit = arr[i] - bestBuy[i];
        maxProfit = max(maxProfit, currentProfit);
    }

    cout << "The max profit : " << maxProfit;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);

    buyAndSell(arr, n);

    return 0;
}