//Create a class Car with a constructor that initializes brand, model, and year.
#include<iostream>
#include<string.h>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;
    car (string x,string y,int z)
    {
        brand=x;
        model=y;
        year=z;
    }
};

int main()
{
     car mycar("BMW", "X5", 1999);

    cout << mycar.brand << endl;
    cout << mycar.model << endl;
    cout << mycar.year ;
    return 0;
}