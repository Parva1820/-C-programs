//Create a class Rectangle with length and width.
#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int width;
};

int main()
{
    Rectangle speci;
    speci.length=2;
    speci.width=3;

    cout << speci.length << endl;
    cout << speci.width ;
    return 0;
}