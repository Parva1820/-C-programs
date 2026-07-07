//Create a class BankAccount with accountNumber (private), balance (protected), and holderName (public). 
#include<iostream>
#include<string.h>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    protected:
    int balance;
    public:
    string holderName;
};

int main()
{
    BankAccount info;
    info.accountNumber=328795423;
    info.balance=23000;
    info.holderName="parva sharma";

    cout <<  info.accountNumber << endl;
    cout << info.balance << endl;
    cout << info.holderName;
    return 0;
}