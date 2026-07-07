#include<iostream>
using namespace std;

int myfunction(int x,int y)
{
    return x+y;
};
double myfunction(double x,double y)
{
    return x+y;
}

int main()
{
    int ans1=myfunction(1,2);
    double ans2=myfunction(1.2,2.4);
    
    cout << ans1 << endl;
    cout << ans2 << endl;
}
