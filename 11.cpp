#include <iostream>
using namespace std;

// Grading code
int main() {
    int unit1, unit2, unit3, unit4, unit5, unit6;
    int sum;
    float average;

    cout << "Enter marks for 6 units (0–100):\n";

    cout << "Unit 1: ";
    cin >> unit1;
    cout << "Unit 2: ";
    cin >> unit2;
    cout << "Unit 3: ";
    cin >> unit3;
    cout << "Unit 4: ";
    cin >> unit4;
    cout << "Unit 5: ";
    cin >> unit5;
    cout << "Unit 6: ";
    cin >> unit6;

    // Validate inputs
    if (unit1 < 0 || unit1 > 100 || unit2 < 0 || unit2 > 100 || 
        unit3 < 0 || unit3 > 100 || unit4 < 0 || unit4 > 100 || 
        unit5 < 0 || unit5 > 100 || unit6 < 0 || unit6 > 100) {
        cout << "Error: Marks must be between 0 and 100.\n";
        return 1; // Exit the program
    }

    // Calculate sum and average
    sum = unit1 + unit2 + unit3 + unit4 + unit5 + unit6;
    average = static_cast<float>(sum) / 6;

    // Determine grade
    cout << "\nYour average score is: " << average << endl;
    if (average >= 70) {
        cout << "Grade: A\n";
    } else if (average >= 60) {
        cout << "Grade: B\n";
    } else if (average >= 50) {
        cout << "Grade: C\n";
    } else if (average >= 40) {
        cout << "Grade: D\n";
    } else {
        cout << "Grade: E\n";
    }

    return 0;
}
