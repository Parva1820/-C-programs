#include<iostream>
#include<string.h>
using namespace std;

class car {
    public:
    string brand;
    string model;
int year;
void introduction(){
cout << "Hi my name is SHARMA PARVA RAKESHKUMAR";
}};

int main()
{
    car car1;
    car1.brand="BMW";
    car1.model="X5";
    car1.year=1999;

    car car2;
    car2.brand="BMW";
    car2.model="X8";
    car2.year=2000;

    cout << car1.brand << "\t" << car1.model <<"\t" << car1.year << endl;
    cout << car2.brand << "\t" << car2.model <<"\t" << car2.year << endl;
car1.introduction();
    return 0;
}