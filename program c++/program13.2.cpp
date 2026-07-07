#include<iostream>
using namespace std;

int main();
{
    int row=2 , column=2;
    
    int matrix[2][2]=
    {
        {1,2},
        {3,4}
    };
    int matrix[row][column] , transpose[column][row];

    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<column ; j++)
        {
            cout << matrix[i][j];
        }
    }
    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<column ; j++)
        {
            transpose[j][i]=matrix [i][j] ;

        }
    }

  for(int i=0; i<column ; i++)
  {
    for(int j=0; j<row; j++)
    {
        cout << transpose[i][j];
    }
    cout << endl;
}
return 0;
}