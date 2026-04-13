void printNto1(int i, int n) {
    // Base Case
    if (i > n) return;

    // Recursive Call (Counting up)
    printNto1(i + 1, n);

    // Work (Printing happens as calls are popped from stack)
    cout << i << " ";
}

int main() {
    int n = 5;
    printNto1(1, n); // Output: 5 4 3 2 1
    return 0;
}