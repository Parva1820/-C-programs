//to calculate the following equation for entered numbers.
#include<iostream>
using namespace std;

int main()
{
    int n,x,p;
    int f=1;
   float ans1=1,ans2=1,sum=1;
    n=3;
    x=2;

    for(int p=1 ; p<=n ; p++)
   {
    ans1=ans1*(n-p+1)*x;
    f=f*p;
    ans2=ans1/f;
    if(p%2==1)
    {
sum=sum+ans2;}
else;{
sum=sum-ans2;
    }
   }
   cout << sum;
}