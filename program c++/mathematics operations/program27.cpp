//to check the entered year is leap year or not.
#include<iostream>
using namespace std;

int main ()
{
    int year=2020;
if (year%4==0)
{
    cout << "the entered year is leap year." << endl;
}
else
{
    cout << "the entred year is not a leap year.";
}
return 0;
}