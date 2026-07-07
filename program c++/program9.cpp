#include<iostream>
#include<string.h>
using namespace std;

struct employee{
string firstname;
string lastname;
int IDnumber;
double salary;
double costperhour;
};

int main(){
employee employee1;

employee1.firstname="parva";
employee1.lastname="sharma";
employee1.IDnumber=240376;
employee1.salary=50000;
employee1.costperhour=100;

employee employee2;
employee2.firstname="krishna";
employee2.lastname="pandit";
employee2.IDnumber=2430386;
employee2.salary=100000;
employee2.costperhour=1000;

cout << employee2.firstname << "\t" << employee2.lastname << "\t" << employee2.IDnumber<< "\t" << employee2.salary << "\t" << "employee2.costperhour=3698200"<< endl;
}
