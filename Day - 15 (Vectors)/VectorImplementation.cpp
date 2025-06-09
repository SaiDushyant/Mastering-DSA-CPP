#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};

    cout << "Size : " << vec.size() << endl;         // 3
    cout << "Capacity : " << vec.capacity() << endl; // 3

    vec.push_back(4);
    cout << "Size : " << vec.size() << endl;         // 4
    cout << "Capacity : " << vec.capacity() << endl; // 6

    return 0;
}