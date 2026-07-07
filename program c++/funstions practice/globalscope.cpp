#include<iostream>
using namespace std;

int x=5;

void functions()
{
    cout << ++x << endl;
}

int main()
{
    functions();
    int x=3;
    cout << x;
    return 0;
}