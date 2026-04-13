#include <iostream>
using namespace std;

void printNumbers(int i, int n) {
    // BASE CONDITION
    // Stop once i goes past n
    if (i > n) {
        return;
    }

    // WORK
    // Print the current value of i
    cout << i << " ";

    // RECURSIVE CALL
    // Move to the next number
    printNumbers(i + 1, n);
}

int main() {
    int n;
    cin >> n;

    // Start from 1
    printNumbers(1, n);

    return 0;
} 