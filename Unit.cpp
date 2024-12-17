#include <iostream>
using namespace std;

int main(){
    int unit1, unit2, unit3, unit4, unit5, unit6, sum;
    double average;
    char grade;

    cout<< "Enter marks for unit 1:"<<endl;
    cin>>unit1;
    cout << "Enter marks for unit 2:"<< endl;
    cin>>unit2;
    cout << "Enter marks for unit 3:"<< endl;
    cin>>unit3;
    cout << "Enter marks for unit 4"<< endl;
    cin>> unit4;
    cout << "Enter marks for unit 5"<< endl;
    cin>> unit5;
    cout << "Enter marks for unit 6"<< endl;
    cin>> unit6;

    sum = unit1 + unit2 + unit3 + unit4 + unit5 + unit6;
    average = static_cast<double>(sum)/6;

    if(average >= 70){
        cout<<"Grade A"<<endl;
    }
    else if(average >=60 && average < 70){
        cout<< "Grade B"<< endl;
    }
    else if(average >=50 && average < 60){
        cout<< "Grade C"<< endl;
    }
    else if(average >=40 && average < 50){
        cout << "Grade D"<< endl;
    }
    else{
        cout <<"Grade E"<< endl;
    }

    cout<< "The average is " << average << endl;
    return 0;

}