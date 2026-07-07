//using multidimentional array display table of 5-7 student darta base.
#include<iostream>
#include<string.h>
using namespace std;

struct {
    string studentname;
    string familyname;
    double student_idnumber;
} std1,std2;

int main()
{
    std1.studentname="Parva R. Sharma";
    std1.familyname="sharma family";
    std1.student_idnumber=30376;


    std2.studentname="Krishna S. Pandit";
    std2.familyname="Pandit family";
    std2.student_idnumber=30386;
    
    cout << std1.studentname << "\t" <<  std1.familyname << "\t" <<  std1.student_idnumber << endl;
       cout << std2.studentname << "\t" <<  std2.familyname << "\t" <<  std2.student_idnumber << endl;
       }