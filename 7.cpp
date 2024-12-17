#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter your number and I will tell you if it's positive or negative." <<endl;
    cin >> number ;

    if(number >= 0){
        cout << number <<"is a positive number" <<endl;
    }
    else{
        cout << number <<" is a negative number" << endl;
    }
    
    return 0;
}

