#include <iostream>
#include <windows.h> // for Sleep function (Windows only)
using namespace std;

int main() {
    int currentFloor = 0; // 0 = Ground, 1 = First, 2 = Second
    int destination;

    cout << "Welcome to the 3-Floor Lift System\n";
    cout << "-----------------------------------\n";

    while (true) {
        cout << "\nYou are currently on: ";
        if (currentFloor == 0)
            cout << "Ground Floor";
        else if (currentFloor == 1)
            cout << "1st Floor";
        else if (currentFloor == 2)
            cout << "2nd Floor";

        cout << "\nEnter destination floor (0 = Ground, 1 = First, 2 = Second, -1 to exit): ";
        cin >> destination;

        if (destination == -1) {
            cout << "Exiting the lift. Thank you!\n";
            break;
        }

        if (destination < 0 || destination > 2) {
            cout << "Invalid floor. Please enter 0, 1, or 2.\n";
            continue;
        }

        if (destination == currentFloor) {
            cout << "You are already on that floor!\n";
            continue;
        }

        cout << "Lift moving ";
        if (destination > currentFloor)
            cout << "UP...\n";
        else
            cout << "DOWN...\n";

        // Simulate time delay while moving
        while (currentFloor != destination) {
            Sleep(1000); // wait for 1 second
            if (destination > currentFloor)
                currentFloor++;
            else
                currentFloor--;

            cout << "Passing floor: " << currentFloor << endl;
        }

        cout << "Lift has arrived at floor ";
        if (currentFloor == 0)
            cout << "Ground Floor\n";
        else if (currentFloor == 1)
            cout << "1st Floor\n";
        else if (currentFloor == 2)
            cout << "2nd Floor\n";
    }

    return 0;
}
