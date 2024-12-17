#include <iostream>
using namespace std;

int main(){
    double number, sum = 0;
    cout<< "Enter a real number and -1 to stop"<< endl;
    cin >> number;

    while (true)
    {
        if (number == -1)
        {
            break;
        }
        sum = sum + number;
        cout <<"You entered "<<  number << endl;
        cin >> number;
    }

     cout << "The final sum is: " << sum << endl;

    return 0;
    
}