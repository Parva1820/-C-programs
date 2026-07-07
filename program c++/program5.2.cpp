#include<iostream>
using namespace std;

int main()
{
    int n=30;
    
    cout << "the range of the prime number is" << n << endl;


    for(int i=2; i<=n; i++)
    {
        bool isprime=true;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout << i << "\t";
        }
    }
    return 0;
}