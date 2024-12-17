#include <iostream>
using namespace std;

class Parent {
public:
    void display() { cout << "This is the Parent class." << endl; }
};


class Child : public Parent {
    // Child inherits from Parent
    public:
    void display() { cout << "This is the Child class." << endl; }


};

int main() {
    Child obj;
    obj.display(); // Accessing Parent class method

    
    return 0;
}
