#include<iostream>
using namespace std;

int main()
{
    int rows=2 , columns=2;
    int p[2][2]={
        {1,2},
        {3,4}
    };
    int r[2][2]={
        {5,6},
        {7,8}
    };
    int s[2][2];

    for(int i=0;i<rows; i++)
    {
        for(int j=0;j<columns ;j++)
        {
r[j] [i]= r[i] [j]  ;      
    // s[i][j] = p[i][j] * r[i][j];
        }
    }                                                                           
    for(int i=0;i<rows; i++)
    {
        for(int j=0;j<columns ;j++)
        {
            cout << r[j][i] << endl;
        }
    }
}