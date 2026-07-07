//to print the perfect number.
#include<iostream>
using namespace std;

int main()
{
    int a=3 , b=1 , c=0;

    for(b=1 ; b<=a; b++)
    {
        if(a%b==0){
        c=c+b;}
    }
    if(a==c)
    {
    cout << c << "\t" << "is a perfect number" << endl;
}
else;
    {
    cout << c << "\t" << "is a not perfect number" << endl;
}
}