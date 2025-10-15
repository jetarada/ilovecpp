#include <iostream>
using namespace std;

int main() {

    int number; /* Step 1: Declare (and initialize) the variable. */
    cout << "Enter a number: "; /* Step 2: Give a prompt to the user. */
    cin >> number; /* Step 3: Use the data input code. */

    if (number > 0) { /* Step 4: Use the data in a conditional statement. */
        cout << "The number is Positive!" << endl;  /* Step 5 (optional): Use the data for display. */
    }
    else if (number < 0) {
        cout << "The number is Negative!" << endl;  /* Step 6 (optional): Use the data for display. */
    }
    else {  /* Step 6: Use the data in a conditional statement. */
        cout << "The number is Zero!" << endl;  /* Step 7 (optional): Use the data for display. */
    }
    return 0;
    
}

