//LACTURE ARRANGEMEMT SYSTEM.
#include<iostream>
using namespace std;

int main()
{
    string lacture,faculty_name;
    float yes=1,answer;
    cout << "TIME TABLE FOR THE F-division CE department.";
    cout << endl;
    start:
        cout << "PLEASE ENTRE THE LACTURE AND FACULTY NAME. ";
         cout << endl;
    cin >> lacture;
    cin >> faculty_name;
     cout << endl;
    cout << lacture << "\t" << faculty_name;
     cout << endl;
    cout << "DO YOU WANT TO ANY OTHER LACTURES IN THE TIME TABLE ?";
     cout << endl;
    cin >> answer;
    if(answer==yes){
         goto start;
    }
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl;
    cout << "|      MONDAY       |      TUESDAY      |      WEDNESDAY      |      THURSDAY      |      FRIDAY      |      SATURDAY        |";
}
