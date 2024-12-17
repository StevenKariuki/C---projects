#include <iostream>
using namespace std;

int main(){
    int score;

    cout <<"Enter your exam score:" <<endl;
    cin >> score;

    if(score >= 70){
         cout <<"Your grade is C:" <<endl;
    }
    else if (score >= 80){
         cout <<"our grade is B:" <<endl;
    }
    else if(score >= 90){
         cout <<"our grade is A:" <<endl;
    }
    else if(score >= 95){
        cout <<"You are a nerd!" << endl;
    }
    else{
         cout <<"Hhhmmmmm....You entered invalid marks!" <<endl;
          cout <<"Try again." <<endl;
    }

    return 0;
}