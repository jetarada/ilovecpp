// Include section
#include <iostream>
using namespace std;

void showNumber(int skipper) {
    /*  For loop parts:
            int i = 0 (iterator)
            i < 10 (comparison)
            i++ (increment) OR i += skipper (adder)
    */
    for (int i = 0; i < 10; i += skipper) {
        // Display the number
        cout << i << endl;
    }
}
int main() {
    // Variable Section
    int skipper;      // Variable to hold the user's skipping number
    // Ask the user for the skipping number
    cout << "Enter a skipper: ";
    // Data input code
    cin >> skipper;
    // Function call to display the numbers from 0 to 9 based on the skipper
    showNumber(skipper);
    return 0;
}

