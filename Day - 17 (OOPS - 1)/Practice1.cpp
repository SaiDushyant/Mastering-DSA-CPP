#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    int id;
    string password;

public:
    string username;

    User(int id)
    {
        cout << "Constructor Initialized" << endl;
        this->id = id;
    }

    // Setter
    void setPassword(string passwordVal)
    {
        password = passwordVal;
    }

    // Getter
    string getPassword()
    {
        return password;
    }
};

int main()
{
    User user1(1);
    user1.username = "Sai";
    user1.setPassword("123");
    cout << "User Name : " << user1.username << endl;
    cout << "Password : " << user1.getPassword() << endl;

    return 0;
}