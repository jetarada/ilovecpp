#include <iostream>
using namespace std;

// Function to print multiples of n from 1 to 10
void printMultiples(int n) {
    cout << "Multiples of " << n << " from 1 to 10:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printMultiples(num);

    return 0;
}