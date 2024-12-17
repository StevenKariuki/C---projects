#include <iostream>
using namespace std;

int main(){
    int number;
    int sum;

    cout<< " Enter your real number and enter -1 to stop" <<endl;
    cin >> number;

    while (true)
    {
        cout<< " Enter number" <<endl;
        cin>> number;

        if (number == -1)
        {
            break;
        }
        sum += number;

        cout<< "You entered " << number <<endl;
    }
    cout << "The final answer is: " << sum <<endl;

    return 0;

    
}