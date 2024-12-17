#include <iostream>
using namespace std;

// Car class definition
class Car {
public:
    string Model;  // Car's model
    string Brand;  // Car's brand
    int Year;      // Manufacturing year

    // Constructor to initialize the car's attributes
    Car(string model, string brand, int year) {
        Model = model;
        Brand = brand;
        Year = year;
    }

    // Method to display car details
    void displayDetails() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << Brand << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar("Corolla", "Toyota", 2022);

    // Display the car's details
    myCar.displayDetails();

    return 0;
}
