#include <iostream>
using namespace std;

class Login {
    string username, password;

public:
    Login(string user, string pass) : username(user), password(pass) {}

    bool authenticate(string user, string pass) {
        return (username == user && password == pass);
    }
};

int main() {
    Login user("admin", "1234");
    cout << "Login Success: " << (user.authenticate("admin", "1234") ? "Yes" : "No") << endl;
    return 0;
}
