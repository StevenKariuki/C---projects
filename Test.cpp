#include <iostream>
#include <vector>
using namespace std;

// Arrays to store words for numbers
string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string thousands[] = {"", "Thousand", "Million", "Billion" "Trillion",};

// Function to convert a number less than 1000 into words
string convertHundred(int n) {
    string result;
    if (n >= 100) {
        result += ones[n / 100] + " Hundred ";
        n %= 100;
    }
    if (n >= 10 && n < 20) {
        result += teens[n - 10] + " ";
    } else {
        if (n >= 20) {
            result += tens[n / 10] + " ";
            n %= 10;
        }
        if (n > 0) {
            result += ones[n] + " ";
        }
    }
    return result;
}

// Function to convert a number into words
string numberToWords(int n) {
    if (n == 0) return "Zero";
    
    string result;
    int i = 0;
    
    while (n > 0) {
        if (n % 1000 != 0) {
            result = convertHundred(n % 1000) + thousands[i] + " " + result;
        }
        n /= 1000;
        i++;
    }
    
    return result;
}

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    //  The program asks the user for 5 number inputs and then prints the number in words

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number:";
    cin >> num2;

    cout << "Enter the third number:";
    cin >> num3;

    cout <<  numberToWords(num1) << endl;  
    cout << numberToWords(num2) << endl;
    cout << numberToWords(num3) << endl;

    return 0;
}
