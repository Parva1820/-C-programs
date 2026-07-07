//to find out the entered number is armstrong or not.
#include<iostream>
using namespace std;

int main()
{
    int n=145,num,remainder;
int sum=0;
    num=n;
    while(num>0)
    {
        remainder=num%10;
        sum=sum+remainder*remainder*remainder;
        num=num/10;
    }
    if(sum=num)
    {
        cout << n << "is an armstrong number.";
    }
    else
    {
        cout << n << "is not an armstrong number.";
    
    }
}