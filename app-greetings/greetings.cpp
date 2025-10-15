#include <iostream>
using namespace std;
int main() {
    // Variable section
    char key;  // Variable to hold the letter of a language
    // Ask the user for the grade
    cout << "Enter a letter: ";
    // Data input code
    cin >> key;
    // Checks the user's data
    switch (key)
    {
    case 'f':
        // Greeting in filipino
        cout << "Mabuhay!" << endl;
        break;
    case 'e':
        // Greeting in english
        cout << "Hello!" << endl;
        break;
    case 'j':
        // Greeting in japanese
        cout << "Konnichiwa!" << endl;
        break;
    default:
        // None of the above, prints "Hello, world" instead
        cout << "Hello, world!" << endl;
        break;
    }
    return 0;
}