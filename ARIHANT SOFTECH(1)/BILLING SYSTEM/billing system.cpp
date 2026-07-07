#include<iostream>
#include<string.h>
#include<ctime>
using namespace std;

int main(){
    time_t date_time;
    time(&date_time);
    string name,product;
    int ans=1,answer;
    float mobilenumber;
    float discountedprice,totalamount,dueamount,quantity,grossamount;
    float price,discount,amount=0;

    cout << "                                                     Shri Kant Electronic" << endl;
        cout << endl;
    cout << endl;

    cout << "DATE AND TIME :   " << ctime(&date_time);
    cout << endl;
    cout << endl;
    cout << "     entre the name of the customer           " ;
    cin >> name;
    cout << "entre the mobile number of customer           ";
    cin >> mobilenumber;
    cout << "---------------------------------------------------";
    cout << endl;
        cout << endl;

 start:
    cout << " ITEM             ";
    cin >> product  ;
    cout << endl;
     cout << "  quantity            ";
    cin >> quantity ;
    cout << "   price             ";
        cin >> price;
         amount=amount+price*quantity;
        cout << " do you want to entre anything?";
    cin >> answer;
    if(answer==ans){
        goto start;
    }
cout << amount;
cout << endl;

   cout << "   discount(%)                  ";
        cin >> discount;
discountedprice=amount*(discount/100);
cout << "total discounted amount                  "  <<discountedprice;
cout << endl;
    cout << "---------------------------------------------------";
totalamount=amount*quantity;
    cout << endl;

cout << "total amount to be paid                  "  <<amount;
    cout << endl;
        cout << "------------------------------------------------";
    cout << endl;
    grossamount=amount-discountedprice;
    cout << endl;
    cout << "      total amount paid                  " << grossamount;
    cout << endl;
        cout << "------------------------------------------------";

        //dueamount=price-totalamount;4
        cout << endl;


    cout << "             amount due                  " ;
     cin >> dueamount;
    cout << endl;
    cout << "----------------------------------------------------";

    cout << endl;

cout << "                                                     INVOICE" << endl;
        cout << endl;
        cout << "                                                Shri Kant Electronic" << endl;
         cout << "----------------------------------------------------";
         cout << endl;
         cout << "ITEM     |  QUNATITY | PRICE |";
         cout << endl;

cout << "----------------------------------------------------";
cout << endl;
          cout << product  << "      |"<< quantity << "      |" << price << "      |";
        cout << endl;

cout << "B-3, District shopping center,  CHH Rd, Sector-21, Gandhinagar , Gujarat-382021  ";
cout << endl;


cout << "                                                         THANK YOU ";
    cout << endl;
cout << "                                                        VISIT AGAIN";
    return 0;
}
