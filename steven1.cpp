#include <iostream>
using namespace std;

int addNumber(int number1 , int number2){
    

    return number1 + number2;
}


int main(){
    int number1 , number2, sum;

    cout<< "Enter number 1"<<endl;
    cin>>number1;
    cout<< "Enter number 2"<<endl;
    cin>>number2;
     

    sum  = addNumber(number1 , number2);
    cout<<"Your sum is " << sum <<endl;

}