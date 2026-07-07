//to display the current date and time.
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t parva;
    time(&parva);

    cout << ctime(&parva);
    return 0;
}