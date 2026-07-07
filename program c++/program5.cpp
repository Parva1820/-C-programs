#include<iostream>
using namespace std;

int main()
{
  int n;
  n=30;
  cout << "the range of the prime number is =" << n << endl;

  for(int num=2; num<=n; num++)
  {
    bool isprime=true;
    for(int i=2; i*i<=num; i++)
    {
      if(num%i==0)
      {
         isprime=false;
        break;
      }
    }
    if(isprime){
    cout << num << "\t";
    }
  }
  return 0;
}