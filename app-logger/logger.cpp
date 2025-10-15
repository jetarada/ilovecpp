// Include section
#include <iostream>
#include <string>
using namespace std;

int main() {

    // Variable Section
    string name;      // Variable to hold a visitor's name
    string date;      // Variable to hold the date of visit of that visitor
    char response;    // Variable to hold if the user wants to put more information

    // Do the codes before comparing
    do {
        cout << "-------------------------------------------" << endl;
        // Ask the user for the name of visitor
        cout << "Enter a visitor's name: ";
        // Data input code
        getline(cin, name);
        // Ask the user for the date of visit
        cout << "Enter visit date: ";
        // Data input code
        getline(cin, date);

        // Display the information provided
        cout << "Name: " << name << endl;
        cout << "Date of Visit: " << date << endl;

        // Ask the user for the response
        cout << "Continue? (y/n): ";
        // Data input code
        cin >> response;
        // The purpose of the code below is to fix the issue for entering another visitor name
        cin.get();

    } while (response == 'y');

    return 0;
}

