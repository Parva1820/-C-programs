//to arrange the given numbers in ascending order.
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num[5]={5,4,3,2,1};
    
    int j=sizeof(num)/sizeof(num[0]);
    sort(num,num+j);
    for(int i=0 ; i<j; i++)
    {
    cout << num[i] << "\t";
    }
    return 0;
}