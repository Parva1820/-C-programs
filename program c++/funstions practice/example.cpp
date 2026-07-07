#include<iostream>
using namespace std;

float tocelcius(float fahrenhite){
    return (5.0/9.0)*(fahrenhite-32.0);
}

int main()
{
    float f_value=32.0;
    float result=tocelcius(f_value);

    cout << "fahernhite" << "\t"<<f_value << endl;
    cout << "after  converting fahernhite into celcius" << "\t" <<result; 
return 0;
}