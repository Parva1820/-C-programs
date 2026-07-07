#include<iostream>
using namespace std;

void function(int x, int y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    int firstno=1;
    int secontno=2;

    cout << firstno << "\t" << secontno << endl;

    swap(firstno,secontno);
    cout << firstno << "\t" << secontno;
}
