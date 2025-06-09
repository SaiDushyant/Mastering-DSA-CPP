#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (true)
    {
        if (i == 15)
        {
            break;
        }

        cout << i << endl;
        i++;
    }

    return 0;
}