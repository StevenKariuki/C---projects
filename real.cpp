#include <iostream>
using namespace std;

int main(){
    string username;
    int password;
    
    cout << "Enter your username:" << endl;
    cin >> username ;

    if(username == "Steven", "Essy"){
        cout << "Enter your password:" << endl;
        cin >> password;

        if (password == 123456)
        {
            cout << "Welcome " << username << endl;
        }
        else{
            cout<< "Invalid Password!"<< endl;
            cout<< "Try again"<< endl;
        }
    }
    else{
        cout << "Invalid username!" << endl;
        cout << "Try Again!" << endl;
    }
}