#include <iostream>
using namespace std;


class hello
{
private:
    /* data */
public:
    hello(/* args */);
    ~hello();
};

hello::hello(/* args */)
{
    cout<<"heloo world"<< endl;
}

hello::~hello()
{
}

int main(){
    hello h1;
    hello h2;
    hello h3;
    hello h4;
    hello h5;
    hello h6;
}