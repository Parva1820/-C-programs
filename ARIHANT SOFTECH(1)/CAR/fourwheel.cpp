#include<iostream>
#include<string.h>
using namespace std;

int main(){
    cout << "YOUR ARE NOW RIDING A CAR HAVING FOUR WHEEL." << endl;
    cout << "PLEASE MAKE SURE THE YOU HAVE YOU DRIVING LICENCE.endl" << endl;
    cout << endl;
char directions;
do{
cin >> directions;
cout << endl;
switch(toupper(directions))
{
case 'F':
    cout << "THE CAR IS MOVING FOREWARD.";
    break;

case 'B':
    cout << "THE CAR IS MOVING BACKWARD.";
    break;

case 'L':
    cout << "THE CAR IS MOVING TOWARDS LEFT." << endl ;
    cout << "PLEASE KEEP WATCH ON BOTH THE SIDE MIRRORS";
    break;

case 'R':
    cout << "THE CAR IS MOVING TOWARDS RIGHT." << endl ;
    cout << "PLEASE KEEP WATCH ON BOTH THE SIDE MIRRORS";
    break;
case 'Q':
    cout << "exit";
    break;

default :
    cout << "invalid input";
}
}while(toupper(directions) !='Q');

}
