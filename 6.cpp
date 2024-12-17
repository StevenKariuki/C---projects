#include <iostream>
using namespace std;

int main(){
    int number = 1;

    cout << "Enter a number " <<endl;
    cin >> number;

    while (number >= -10000000 && number <= 5)
    {
        cout << number << endl;
       number = number +1;
    }
    
    return 0;
}