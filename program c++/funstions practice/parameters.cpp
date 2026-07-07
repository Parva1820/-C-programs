#include<iostream>
using namespace std;

void function(string name="het", int age=18)
{
    cout << name << "\t" << "zala"  << "\t" <<age<< endl;
}

int main()
{
    function("parva",18);
    function("dhariya",20);
    function();
    function("krishna",15);
    function("jahhan",19);
    return 0;
}