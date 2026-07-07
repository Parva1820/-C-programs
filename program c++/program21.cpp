//to find out the given number is palindrome or not.
#include<iostream>
using namespace std;

int main()
{
    int number=142 , remainder , result=0, originalnumber;
    originalnumber=number;

   while(number>0){

    remainder=number%10;
    result=result*10+remainder;
    number=number/10;
   }
if(originalnumber==result){
    cout << result << "\t" << "is a palindrome number.";
}    
else
{
    cout << result << "\t" << "is a not  palindrome number.";
}

return 0;
}