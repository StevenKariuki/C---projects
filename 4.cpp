#include <iostream>
using namespace std;

int main(){
    int number;
    int ans;
    
    do
    {
        cout <<"Enter a number between 1 and 4"<<endl;
        cin >> number;
    } while (ans >= 1 && ans <=4);
    cout << "The number you entered is " << number << endl;
    cout << "Done"<< endl;
    
}