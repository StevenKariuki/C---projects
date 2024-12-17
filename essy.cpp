#include <iostream>
using namespace std;

class SweetWords {
public:
    // Constructor to display sweet words
    SweetWords() {
        cout << "Hey love, just wanted to say something sweet to brighten your day!" << endl;
    }

    // Function to display sweet words
    void expressLove() {
        cout << "You are the most amazing person I've ever met." << endl;
        cout << "Every moment with you feels magical and special." << endl;
        cout << "Thank you for being the light in my life." << endl;
        cout << "I love you more than words can say. ❤️" << endl;
    }
};

int main() {
    // Create an object of the SweetWords class
    SweetWords sweet;

    // Express sweet words
    sweet.expressLove();

    return 0;
}
