#include <iostream>

using namespace std;

int main() {
    int n;
    double x;
    
    // Taking input
    cout << "Enter the value of n: ";
    n=3;
    
    cout << "Enter the value of x: ";
     x=2;
    
    double sum = 1.0;  // First term of the series
    double term = 1.0; // Holds the term value dynamically
    double factorial = 1.0; // Holds factorial values

    for (int i = 1; i <= n; i++) {
        term *= (n - i + 1) * x; // Update numerator
        factorial *= i;           // Compute denominator (factorial)
        double currentTerm = term / factorial;
        
        // Alternating signs
        if (i % 2 == 0)
            sum += currentTerm;
        else
            sum -= currentTerm;
    }
    
    // Display the result
    cout << "The result of the series is: " << sum << endl;

    return 0;
}
