#include <iostream>
#include <vector>
using namespace std;

int tilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Vertical
    int ans1 = tilingProblem(n - 1);

    // Horizontal
    int ans2 = tilingProblem(n - 2);

    return ans1 + ans2;
}

int main()
{
    int n = 4;
    cout << tilingProblem(n);
    return 0;
}