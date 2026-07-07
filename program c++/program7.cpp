//to do factorial of a gievn number.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,n,f=1;
i=5;
 n=1 ;

    while ( n<=i )
    {
     f=f*n;
     n++;
    }
   cout << "factorial of " << i << " is =" << f << endl;
return 0;
}