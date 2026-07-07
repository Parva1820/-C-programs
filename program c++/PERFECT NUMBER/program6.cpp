//to print the perfect number.
#include<iostream>
using namespace std;

int main()
{
    int sum=0,num=6;
cout << "the value of the entered number is " << num << endl;

for(int i=1; i<num;i++)
{
    if(num%i==0)
    {
        sum=sum+i;
    }
}
cout << endl;
cout << sum;
cout << endl;
if(sum==num){
    cout << num << " is a perfect number.";
}
else{
cout << num << "is not a perfect number.";
}
return 0;

}
