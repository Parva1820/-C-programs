#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int current_floor,destination;
    srand(time(0));
    int lift_ststus= rand()%5;
    cout << lift_ststus;
cout << endl;
    cout << "CURRENTLY LIFT IS ON " << lift_ststus << " NO. OF FLOOR. " << endl;
    cout << endl;
    cout << "PLEASE ENTRE ON WHICH FLOOR YOU ARE .... = ";
    cin >> current_floor;
    if(current_floor==lift_ststus){
             cout << endl;
        cout << "DOOR OF THE LIFT IS OPENING.";
        cout << endl;
        cout << "PLEASE STAND ONE STEP AWAY FORM THE DOOR OF THE LIFT.";
     cout << endl;
    }
    else if(current_floor < lift_ststus){
             cout << endl;
        cout << "LIFT IS MOVING DOWN TO YOUR FLOOR.";
        cout << endl;

        while(lift_ststus != current_floor) {
           lift_ststus--;
           cout << "LIFT IS MOVING DOWN " << lift_ststus;
           cout << endl;
           if(lift_ststus==current_floor){
                cout << endl;
            cout << "PLEASE STAND ONE STEP AWAY FORM THE DOOR OF THE LIFT.";
        cout << endl;
        cout << "DOOR IS OPENING...PLEASE ENTRE THE LIFT...";
     cout << endl;
           }

        }
    }
    else{
         cout << endl;
        cout << "LIFT IS MOVING up TO YOUR FLOOR.";
        cout << endl;

        while(lift_ststus != current_floor) {
           lift_ststus++;
           cout << "LIFT IS MOVING up " << lift_ststus;
           cout << endl;
           if(lift_ststus==current_floor){
                cout << endl;
            cout << "PLEASE STAND ONE STEP AWAY FORM THE DOOR OF THE LIFT.";
        cout << endl;
        cout << "DOOR IS OPENING...PLEASE ENTRE THE LIFT...";
     cout << endl;
           }
        }
    }
    cout << endl;
    cout << "PLEASE ENTRE YOUR DESTINATION = ";
    cin >> destination;
    if(current_floor==destination){
             cout << endl;
        cout << "YOU ARE ALREADY PRESENT AT YOUR DESTINATION. ";
     cout << endl;
    }
     else if(current_floor < destination){
             cout << endl;
        cout << "LIFT IS MOVING UP TO YOUR DESTINATION " << destination << " floor.";
         cout << endl;
        while(destination != current_floor) {
           current_floor++;
           cout << "LIFT IS MOVING DOWN " << current_floor;
           cout << endl;
           if(destination==current_floor){
                cout << endl;
            cout << "YOU REACHED YOUR DESTINATION...";
            cout << endl;
            cout << "THANK YOU FOR CHOOSING THE LIFT.";
 cout << endl;
           }
    }
     }
    else{
             cout << endl;
        cout << "LIFT IS MOVING DOWN TO YOUR DESTINATION " << destination << " floor.";
         cout << endl;
        while(destination != current_floor) {
           current_floor--;
           cout << "LIFT IS MOVING DOWN " << current_floor;
           cout << endl;
             if(destination==current_floor){
                  cout << endl;
            cout << "YOU REACHED YOUR DESTINATION...";
            cout << endl;
            cout << "THANK YOU FOR CHOOSING THE LIFT.";
 cout << endl;
           }
        }
    }

}
