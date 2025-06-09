#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char word[30];
    // cin >> word; // Ignore white SPace

    // cout << "The word : " << word << endl;
    // cout << "The length : " << strlen(word) << endl;

    char sentence[50];
    cin.getline(sentence, 50);

    cout << "The sentence : " << sentence << endl;
    cout << "The length : " << strlen(sentence) << endl;

    return 0;
}