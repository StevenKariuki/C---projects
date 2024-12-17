#include <iostream>
using namespace std;

class Shape {
public:
    void display() { cout << "This is a shape" << endl; }
};

class Circle : public Shape {
public:
    void drawCircle() { cout << "Drawing a Circle" << endl; }
};

class Oval : public Shape {
public:
    void drawOval() { cout << "Drawing an Oval" << endl; }
};

int main() {
    Circle c;
    Oval o;

    c.display();
    c.drawCircle();

    o.display();
    o.drawOval();

    return 0;
}
