//find the factorial of a given number by using recursive function.
#include<iostream>
using namespace std;
 
int fact(int n){
    if(n>1){
   return n*fact(n-1);
    }
    else { return 1;
    }
}
int main()
{
    cout << "factorial of 8 is=" << fact(8);
    return 0;
}