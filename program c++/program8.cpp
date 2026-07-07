#include<iostream>
using namespace std;

int main()
{
    int a=5,b=0,c=0,d,e=1;

    for (b=0;b<a;b++)
    {
        if(b<=1){
        d=b;}
        else;{
        d=c+e;
        c=e;
        e=d;
       /* c=c+b;
        break;*/
       //cout << c << endl;
        }
        cout << d << endl;
    }
     //cout << b << endl;
   // cout << "fibonacci series of " << a << "is =" << b << endl;
    return 0;


}