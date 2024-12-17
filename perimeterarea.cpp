#include <iostream>
using namespace std;

int main(){
    int length;
    int breadth;
    double perimeter;
    double area;

    cout<< "Enter the length: "<< endl;
    cin>> length;

    cout <<"Enter the Breadth"<< endl;
    cin>> breadth;

    perimeter = length + breadth;
    area = length * breadth;

    cout<< "The perimeter is "<< perimeter<< " units, and the area is "<< area<< " square units.";

    return 0;
}