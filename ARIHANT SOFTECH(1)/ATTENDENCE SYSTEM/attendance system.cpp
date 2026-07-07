#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int totalemployees = 5;
    int rollnumber[5] = {1, 2, 3, 4};
    int number; // You can change this or use cin to input
ofstream file("attendance.txt");
cin >> number;


    for(int i = 0; i < totalemployees; i++) {
        if(rollnumber[i] == number) {
         cout << number << " PRESENT" << endl;
         file << number << " PRESENT" << endl;
        }
    }
     for(int i = 0; i > totalemployees; i++) {
 if(rollnumber[i] != number) {
       cout << number << " ABSENT" << endl;
       file << number << " ABSENT" << endl;
       break;
    }
     }
    return 0;
}
