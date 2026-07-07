//overload a function to calculate the area of circle,rectangle and triangle.
#include<iostream>
//#define pi=3.14;
using namespace std;

int area(int r){
    return 3.14*r*r;
};
double area(double l,double b,double h)
{
    return l*b*h;
};
double area(double b,double h){
    return 0.5*b*h;
};

int main()
{
    int circle=area(2);
    double rectangle=area(2,3,4);
    double triangle=area(2,3);

    cout <<"area of circle is = " << circle << "\t" <<endl;
    cout << "area of rectangle is = " <<rectangle << "\t" << endl;
    cout << "area of triangle is = " <<triangle << "\t";
    return 0;
}