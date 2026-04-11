#include <iostream>
#include <string>
using namespace std;

void printName(int i, int n) {
    // BASE CONDITION: 
    // If our current counter 'i' exceeds 'n', stop.
    if (i > n) {
        return;
    }

    // WORK:
    // Print the name
    cout << "Alain" << endl;

    // RECURSIVE CALL:
    // Call the function again, but increment 'i' by 1
    printName(i + 1, n);
}

int main() {
    int n;
    cout << "Enter how many times to print: ";
    cin >> n;

    // Start from 1 up to n
    printName(1, n);

    return 0;
}