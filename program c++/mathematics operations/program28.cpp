//to find out the surface area and volume of the cone.
#include<iostream>
using namespace std;

int main()
{
    double r=2,s=3;
    double area, volume;

    cout << "the value of r is r= " << r << endl;
    cout << "and the value of s is s= " << s << endl;

    area=3.14*r*s+3.14*r*r;
    cout << "the surface area of cone is= " << area << endl;
    
    volume=0.33333*r*r*s;
    cout << "the volume of the cone is= " << volume << endl;
    return 0;
}