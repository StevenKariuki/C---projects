#include <iostream>
using namespace std;

int main(){
     
     int number1;
     int number2;
     int sum;

     cout<< "Enter your first number"<< endl;
     cin >> number1;

     cout <<"Enter your second number"<< endl;
     cin >>number2;

     sum = number1 + number2;
     
     if(sum % 2 == 0){
        cout << "The sum is "<< sum << endl;
        cout << "The sum is even "<< endl;
     }
     if(sum == 0){
        cout << " Hmmmm You have entered invalid number! "<< endl;
     }
     else{
        cout << "The sum is "<< sum << endl;
        cout << "The sum is odd"<< endl;
     }
   
    return 0;
}