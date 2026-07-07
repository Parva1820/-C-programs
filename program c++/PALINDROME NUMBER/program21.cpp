//to find out the given number is palindrome or not.
//the entered numbers and reverse of that number must be same then it is called palindrome number.
#include<iostream>
using namespace std;

int main()
{
    int number=141 , remainder , result=0, originalnumber;
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