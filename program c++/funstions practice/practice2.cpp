/*Write a function that returns an object of a class "Rectangle" with width and 
height, and another function that calculates its area.*/

#include<iostream>
using namespace std;

class rectangle{
    public:
    double height;
    double width;
    

    double area()
    {
        return height*width;
    }
};

int main()
{
    rectangle myobj;
    myobj.height=2;
    myobj.width=3;
    myobj.area();

    cout << myobj.height << endl;
    cout <<  myobj.width << endl;
    cout << myobj.area();

    
}

