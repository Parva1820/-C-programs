//to find HCF and LCM of two numbers.
#include<iostream>
using namespace std;

int main()
{
int p,q,r;
p=15;
q=10;
r=p*q;
while(p!=q)
{
    if(p>q)
    {
        p=p-q;
    }
    else{
        q=q-p;
    }
}
cout << "hcf=" << p << endl;
cout << "lcf=" << r/p;

}