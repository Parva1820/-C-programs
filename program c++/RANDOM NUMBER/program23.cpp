//to generate a random number.
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int max=20537289856, numgenerated;
cout << "the value of max is" << "\t" << max << endl;
 srand(time(0));
 numgenerated=(rand()%max)+1;
 cout << numgenerated;

}