#include <iostream>
using namespace std;

int bio(int n, int r)
{
    int n_fact = 1;
    if (n == 1 || 0)
    {
        n_fact = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            n_fact *= i;
        }
    }
    int r_fact = 1;
    if (r == 1 || 0)
    {
        r_fact = 1;
    }
    else
    {
        for (int j = 2; j <= r; j++)
        {
            r_fact *= j;
        }
    }
    int nr_fact = 1;
    if ((n - r) == 1 || 0)
    {
        nr_fact = 1;
    }
    else
    {
        for (int k = 2; k <= (n - r); k++)
        {
            nr_fact *= k;
        }
    }

    int result = n_fact / (r_fact * (nr_fact));
    return result;
}

int main()
{
    int n = 10, r = 5;
    cout << bio(n, r);
    return 0;
}