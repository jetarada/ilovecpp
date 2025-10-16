/*
    Description:
        The program will ask the player to guess a number.
        Also, give the player some hints such as the guess
        was high, or the guess was low. The player has 5
        attempts.

*/

// Include section
#include <iostream>     // Needed for cin and cout
#include <cstdlib>      // Needed for srand()
#include <ctime>        // Neededd for rand() and time()

// Scope declaration
using namespace std;

// Main function
int main() {
    // Variables section
    int r;      // Variable to hold the random numbers
    int guess;  // Variable to hold the user's guess
    // Constant section
    const int ATTEMPTS = 5;
    // The srand function stands for "seed random",
    // used for getting different random numbers
    // every time we run the code
    srand(time(NULL));

    // Give a random number from 1 to 100 to variable r
    // Formula: rand() % <end number> + 1;
    r = rand() % 100 + 1;
    // NOTE: The computer always start at 0 that's why
    // if you check the code, there is a + 1 at line 28
    // so that it will be adjusted and the start number 
    // is 1. The end number is 100.

    // Use for loop to efficiently make the attempts
    for (int i = 0; i < ATTEMPTS; i++) {
        // Display the attempt number
        cout << "Attempt #" << i + 1 << endl;
        // Ask the user's number for guessing
        cout << "Enter a number: ";
        // Data input code
        cin >> guess;

        // If the guess is correct, break out of
        // the loop and display a win message
        if (guess == r) {
            cout << "You win!" << endl;
            break;  // Breaks out of the loop
                    // and will not finish the
                    // loop anymore
        } 
        // Else if the guess > r, inform the
        // player that the guessed number is
        // high
        else if (guess > r) {
            cout << "Your guess was high!" << endl;
        }
        // Else, inform the player that
        // the guess was low
        else if (guess < r) {
            cout << "Your guess was low!" << endl;
        }

        // Make a separate if statement for making
        // a losing message and show the guessed 
        // number if ever the all attempts were used
        if (i == 4) {
            cout << "The random number is " << r << "." << endl;
            cout << "You lose!" << endl;
        }
    }

    return 0;
}