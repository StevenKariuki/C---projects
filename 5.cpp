#include <iostream>
using namespace std;

int main() {
    double salary;
    int years = 0;

    cout << "Enter your salary:" << endl;
    cin >> salary;

    while (salary < 50000) {
        salary = salary * 1.02; // Increase salary by 2% each year
        years++;
    }
    cout << "You need " << years << " years to reach or exceed 50k." << endl;

    return 0;
}
