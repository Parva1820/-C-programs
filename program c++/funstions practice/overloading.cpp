#include<iostream>
using namespace std;

int numbers1(int x, int y)
{
   return x+y;
}
float numbers2(float x, float y)
{
    return x+y;
}

int main()
{
int mynum1=numbers1(2,3);
float mynum2=numbers2(2.3,4.6);

cout << mynum1 << endl;
cout << mynum2 << endl;

return 0;
}