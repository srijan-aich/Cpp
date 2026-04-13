#include <iostream>
using namespace std;

void print1toN(int i) {
    // Base Case
    if (i < 1) return;

    // Recursive Call (Counting down)
    print1toN(i - 1);

    // Work (Printing happens on the way back up)
    cout << i << " ";
}

int main() {
    int n = 5;
    print1toN(n); // Output: 1 2 3 4 5
    return 0;
}