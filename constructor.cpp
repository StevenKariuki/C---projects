#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    // Constructor
    Example(int val) {
        value = val;
        cout << "Constructor called! Value initialized to " << value << endl;
    }

    // Destructor
    ~Example() {
        cout << "Destructor called! Releasing resources." << endl;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj(10); // Constructor is called here
    obj.display();
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}
