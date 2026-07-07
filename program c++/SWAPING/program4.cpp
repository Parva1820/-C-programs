//to swap the values using third variable.
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    a=938264;
    b=92506;

    cout << "the current value of a is a=" << a << endl;
    cout << "the current value of b is b=" << b << endl << "\n";
      c=a;
    a=b;
    b=c;


    cout << "swaped value of a is a=" << a << endl;
    cout << "swaped value of b is b=" << b ;
    return 0;
}