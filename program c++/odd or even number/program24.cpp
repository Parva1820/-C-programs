//to find the sum of odd numbers in a given range.
#include<iostream>
using namespace std;
int main()
{
    double sum=0;
    for(int i=0 ; i<=5 ; i++){
    if(i%2!=0)
    {
        sum=sum+i;
    }
    }   
    cout<< sum;
return 0;
}