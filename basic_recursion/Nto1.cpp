#include <iostream>
using namespace std;

void printReverse(int i, int n) {
    // BASE CONDITION: Stop if we go below 1
    if (i < 1) {
        return;
    }

    // WORK: Print current number
    cout << i << " ";

    // RECURSIVE CALL: Decrement i
    printReverse(i - 1, n);
}

int main() {
    int n;
    cin >> n;
    printReverse(n, n); // Start from n
    return 0;
}