//Create a class Student with name, rollNumber, and marks as private members.
#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
    string name;
    int rollNumber;
    int marks;
};

int main()
{
    Student s1;
    s1.name="parva sharma";
    s1.rollNumber=2;
    s1.marks=1;

    cout <<  s1.name << endl;
    cout<< s1.rollNumber << endl;
    cout << s1.marks ;
    return 0;
}