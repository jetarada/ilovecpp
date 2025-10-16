/*
    Description:
        This program creates a stack simulator where it can take
        string values and can add, delete, and display string values. 

        Essential operations for stack:
            - push: adds an item at the top of stack
            - pop: deletes the item at the top of stack
            - peek: gets the item at the top of stack
            - isEmpty: gets a result if the stack is empty
*/

// Include Section
#include <iostream>
#include <vector>
#include <string>

// Scope Declaration
using namespace std;

// Class definition
class things {
    public:
        // Default Constructor
        // The only constructor in the class
        // since we will start with an empty stack
        things() {}

        // Class Functions
        // Returns a True/False result if the stack is empty
        bool isEmpty() {
            return items.empty();
        }
        // Adds an item at the top of stack
        void push(string item) {
            items.push_back(item);
        }
        // Deletes an item at the top of stack
        void pop() {
            // Check if the stack is not empty
            if (!isEmpty()) {
                items.pop_back();
            }
            // Else, it is empty
            else {
                cout << "The stack is empty!" << endl;
            }
        }
        // Checks the item at the top of stack
        string peek() {
            // Check if the stack is not empty
            if (!isEmpty()) {
                return items[items.size() - 1];
            }
            // Else, it is empty
            else {
                cout << "The stack is empty!" << endl;
                return "";
            }
        }
        // Display the current contents of stack from top to bottom
        void displayStack() {
            for (int i = items.size() - 1; i >= 0; i--) {
                cout << items[i] << endl;
            }
        }
    private:
        vector<string> items;
};

// Display the choices for the user
void choices() {
    // Make a divider
    cout << "------------------------------------------------" << endl;
    // Inform the user the numbers to enter
    cout << "Enter 1 for adding an item to the top of stack." << endl;
    cout << "Enter 2 to remove an item to the top of stack." << endl;
    cout << "Enter 3 for peeking the item at the top of stack." << endl;
    cout << "Enter 4 for displaying the items of the stack." << endl;
    cout << "Enter -1 to stop the simulator." << endl;
    // Ask the user for the choice
    cout << "Choice: ";
}

// Main Function
int main() {
    // Instantiate object t of class things
    things t;
    // Variables section
    string item;    // Variable to hold the user's data
    int choice;     // Variable to hold the user's choice

    // Welcome the user for using the stack simulator
    cout << "Welcome to stack simulator!" << endl;

    // Function call for displaying the choices
    choices();
    // Data input code
    cin >> choice;

    // Check if the choice is -1 at the start of the simulator
    if (choice == -1) {
        cout << "Thank you for using the stack simulator!" << endl;
    } else {
        // While the choice of the user is not -1, continue
        while (choice != -1) {
            // Use switch to check which code to
            // run based on the value of choice
            switch(choice) {
                case 1:
                    // Add an item to the top of stack
                    cout << "Enter item: ";
                    cin.get();
                    getline(cin, item);
                    t.push(item);
                    break;
                case 2:
                    // Remove an item to the top of stack
                    cout << "Removal completed!" << endl;
                    t.pop();
                    break;
                case 3:
                    // Peek the item at the top of stack
                    cout << "Top of stack: " << t.peek() << endl;
                    break;
                case 4:
                    // Peek the item at the top of stack
                    cout << "Stack items from top to bottom:" << endl;
                    t.displayStack();
                    break;
                case -1:
                    // Display message thanking the user for using the simulator
                    cout << "Thank your for using the stack simulator!" << endl;\
                    break;
                default:
                    break;
            }

            // Function call for displaying the choices
            choices();
            // Data input code
            cin >> choice;
        }
    }

    return 0;
}