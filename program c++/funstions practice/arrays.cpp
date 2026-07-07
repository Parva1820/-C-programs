#include<iostream>
using namespace std;

void array(int arrayno[5])
{
    for (int i=0; i<5 ;i++)
    {
        cout << arrayno[i]<< endl;
    }
}

int main()
{
   int arrayno[5]={10,20,30,40,50};
   array(arrayno);

    return 0;
}