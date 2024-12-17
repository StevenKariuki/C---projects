#include <iostream>
using namespace std;


int main(){
    char choice; 
    cout << "Enter A, B, C or D:" << endl;
    cin >> choice ;

    switch (choice)
    {
    case 'A' : cout << "You enter choice A /n";
        break;
    case 'B' : cout << "You enter choice B /n";
        break;
    case 'C' : cout << "You enter choice C /n";
        break;
    case 'D' : cout << "You enter choice D /n";
        break;                
    
    default: cout << "You did not enter any choice or you entered an invalid choice. "<<endl;
        break;
    }

   
}