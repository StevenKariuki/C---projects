#include <iostream>
using namespace std;

const double pie = 3.14;

double Circumfrence (double diameter) {
    return pie* diameter; 
}

int main(){
    double diameter;

    cout<<"Enter the diameter: "<<endl;
    cin>>diameter;

    cout <<"Your circumfrence is " << Circumfrence (diameter)<<endl;
    

}