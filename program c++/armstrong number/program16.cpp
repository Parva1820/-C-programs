//to find out the entered number is armstrong or not.
//the sum of squre of each digit is equal to the entered number is known armstrong number.
#include<iostream>
using namespace std;

int main()
{
    int n=142,num,remainder;
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