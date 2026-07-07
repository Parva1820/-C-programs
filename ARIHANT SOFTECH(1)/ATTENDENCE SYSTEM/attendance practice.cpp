#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int totaldays=2;
    int totalemployees = 5;
    int rollnumber[2][5] = {
        {1, 2, 3, 4},
        {1, 3, 4, 5}
        };
    int day1; // You can change this or use cin to input
int day2;
cin >> day1;
ofstream file("attendance.txt");

for(int j = 0; j < totaldays; j++){
    for(int i = 0; i < totalemployees; i++) {
        if(rollnumber[j][i] == day1) {
         cout << day1 << " PRESENT" << endl;
         file << day1 << " PRESENT" << endl;
        }
    }
}
for(int j = 0; j < totaldays; j++){
     for(int i = 0; i > totalemployees; i++) {
 if(rollnumber[j][i] != day1) {
       cout << day1 << " ABSENT" << endl;
       file << day1 << " ABSENT" << endl;
       break;
    }
     }
}
     cin >> day2;

for(int j = 0; j < totaldays; j++){
    for(int i = 0; i < totalemployees; i++) {
        if(rollnumber[j][i] == day2) {
         cout << day2 << " PRESENT" << endl;
         file << day2 << " PRESENT" << endl;
        }
    }
}
for(int j = 0; j < totaldays; j++){
     for(int i = 0; i > totalemployees; i++) {
 if(rollnumber[j][i] != day2) {
       cout << day2 << " ABSENT" << endl;
       file << day2 << " ABSENT" << endl;
       break;
    }
     }
     }
    return 0;
}
