//to print the reverse number.
#include<iostream>
using namespace std;
int main()
{
    int num=123456789,remainder,ans=0,sum;
    cout << "entre any number num = " << num << endl;
    while(num>0)
    {
remainder=num%10;
ans=ans*10+remainder;
num=num/10;
//cout << "reverse number is " << num << endl;
    }
    cout << "reverse number is " <<  ans << endl;
    return 0;
}
