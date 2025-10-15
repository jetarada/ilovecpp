// Include library
#include <iostream>
#include <string>

// Scope declaration
using namespace std;

// Function definition for welcoming and guiding the user
void guide() {
    cout << "Welcome to the Trivia Quiz Game!" << endl;
    cout << "Please enter small letters only." << endl;
    cout << "You will be given 5 trivia questions." << endl;
    cout << "10 points for each correct answer." << endl;
    cout << "Get at least 30 points to win the game." << endl;
}

// Main function
int main() {
    // Variables
    string answer;      // Variable to store the user's answer
    int score = 0;      // Set the score to 0 at the start
    // Constant
    const int ITEMS = 5;    // Set the constant to 5 questions
                            // and answers for the 2 arrays
    // Create an array of questions
    string questions[ITEMS] = {
        "How many days are in a year?",         // 365
        "What is a group of lions called?",     // pride
        "Which is the fastest land animal?",    // cheetah
        "It is called a baby goat.",            // kid
        "Where is the Eiffel Tower located?"    // paris 
    };
    // Create an array of answers
    string answers[ITEMS] = {
        "365",          // Answer to first question
        "pride",        // Answer to second question
        "cheetah",      // Answer to third question
        "kid",          // Answer to fourth question
        "paris"         // Answer to fifth question
    };

    // Function call for the guide()
    // Introduce and guide the player
    guide();

    // For loop to generate each question and check each player's answer
    // i stands for the index number of the array to access the value
    // NOTE: The array count always starts at 0
    for (int i = 0; i < ITEMS; i++) {
        // Make a blank space
        cout << endl;
        // Display a question
        cout << questions[i] << endl;
        // Ask the player for the answer
        cout << "Answer: ";
        cin >> answer;

        // Check if the user is correct
        if (answer == answers[i]) {
            // Score 10 points
            score += 10;
            // Display appropriate message
            cout << "Correct!" << endl;
        }
        // Else
        else {
            // Display appropriate message
            cout << "Wrong!" << endl;
        }
    }

    // Display the player's score
    cout << "Your score is " << score << "." << endl;
    // If the score >= 30 (at least 30 points)
    if (score >= 30) {
        // Display winning message
        cout << "You win!" << endl;
    }
    // Else
    else {
        cout << "You lose!" << endl;
    }

    return 0;
}