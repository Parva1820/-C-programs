#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    // Constructor
    Number(int n) {
        num = n;
    }

    // Overload ! operator to check for prime
    bool operator!() {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    // Display number
    void display() {
        cout << "Number is: " << num << endl;
    }
};

// Example usage
int main() {
    Number n1(43);
    n1.display();

    if (!n1) {
        cout << "The number is  prime." << endl;
    } else {
        cout << "The number is NOT PRIME." << endl;
    }

    return 0;
}