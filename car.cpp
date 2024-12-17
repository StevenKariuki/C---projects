#include <iostream>
using namespace std;

class Car {
    public: 
      string Model;
      string Brand;
      int Year;

      void PrintDetails(){
        cout<<"Enter the model:"<< endl;
        getline(cin,Model);
        cout<<"Enter the Brand:"<< endl;
        getline(cin,Brand);
        cout<<"Enter the Year:"<< endl;
        cin >> Year;

        cout << "Model: " << Model << endl;
        cout << "Brand: " << Brand << endl;
        cout << "Year: " << Year << endl;

      }
};
 int main(){


    Car myCar;
    myCar.PrintDetails();

 }
