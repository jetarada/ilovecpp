#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isBorrowed;
};

vector<Book> library;

// Function prototypes
void addBook();
void showBooks();
void searchBook();
void borrowBook();
void returnBook();

int main() {
    int choice;

    do {
        cout << "\n=== Simple Library App ===\n";
        cout << "1. Add Book\n";
        cout << "2. Show All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: addBook(); break;
            case 2: showBooks(); break;
            case 3: searchBook(); break;
            case 4: borrowBook(); break;
            case 5: returnBook(); break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}

void addBook() {
    Book b;
    cout << "\nEnter book ID: ";
    cin >> b.id;
    cin.ignore();
    cout << "Enter book title: ";
    getline(cin, b.title);
    cout << "Enter author: ";
    getline(cin, b.author);
    b.isBorrowed = false;
    library.push_back(b);
    cout << "✅ Book added successfully!\n";
}

void showBooks() {
    if (library.empty()) {
        cout << "\nNo books available.\n";
        return;
    }

    cout << "\n=== Book List ===\n";
    for (const auto &b : library) {
        cout << "ID: " << b.id
             << " | Title: " << b.title
             << " | Author: " << b.author
             << " | Status: " << (b.isBorrowed ? "Borrowed" : "Available") << endl;
    }
}

void searchBook() {
    string keyword;
    cout << "\nEnter title or author to search: ";
    cin.ignore();
    getline(cin, keyword);

    bool found = false;
    for (const auto &b : library) {
        if (b.title.find(keyword) != string::npos || b.author.find(keyword) != string::npos) {
            cout << "Found - ID: " << b.id << ", Title: " << b.title
                 << ", Author: " << b.author
                 << ", Status: " << (b.isBorrowed ? "Borrowed" : "Available") << endl;
            found = true;
        }
    }

    if (!found) cout << "No matching book found.\n";
}

void borrowBook() {
    int id;
    cout << "\nEnter book ID to borrow: ";
    cin >> id;

    for (auto &b : library) {
        if (b.id == id) {
            if (b.isBorrowed) {
                cout << "❌ Book already borrowed.\n";
            } else {
                b.isBorrowed = true;
                cout << "✅ You borrowed \"" << b.title << "\".\n";
            }
            return;
        }
    }

    cout << "Book ID not found.\n";
}

void returnBook() {
    int id;
    cout << "\nEnter book ID to return: ";
    cin >> id;

    for (auto &b : library) {
        if (b.id == id) {
            if (!b.isBorrowed) {
                cout << "❌ This book was not borrowed.\n";
            } else {
                b.isBorrowed = false;
                cout << "✅ You returned \"" << b.title << "\".\n";
            }
            return;
        }
    }

    cout << "Book ID not found.\n";
}
